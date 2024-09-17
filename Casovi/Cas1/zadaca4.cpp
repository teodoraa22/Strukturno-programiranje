//
// Created by Davor on 7/30/2024.
//
#include<iostream>
#include<cstring>
using namespace std;

//Welcome ->со pomestuvanje 5 -> Bjqhtrj

void transform(char *line, int x){ //so *line pristapuvame do karakterot(sodrzinata)
    if(*line == '\0'){
        return;
    }
    if(islower(*line)) {
        *line=*line+x;
        if(*line>'z') {
            *line=*line-26;
        }
     }else if(isupper(*line)) {
        *line=*line+x;
        if(*line>'Z') {
            *line=*line-26;
        }
    }
    transform(line+1, x);
}

int main(){
    char line[80];
    int N, x;
    cin>>N>>x;
    cin.ignore();
    for (int i = 0; i < N; ++i) { //koristime for ciklus zatoa sto znaeme kolku nizi kje vneseme
        cin.getline(line, 80);
        transform(line, x); //ja transformirame nizata za dadeno pomestuvanje
        cout<<line<<endl;
    }
    return 0;
}