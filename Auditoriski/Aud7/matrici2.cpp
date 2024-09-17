//
// Created by Teodora on 12/10/2023.
//
#include<iostream>
using namespace std;

int main(){
    int matrica[100][100];
    int size;

    cin>>size;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrica[i][j];
        }
    }

    bool simetricna = true;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(matrica[i][j] != matrica[j][i]){
                simetricna = false;
            }
        }
    }

    if(simetricna){
        cout<<"Matricata e simetricna"<<endl;
    }else{
        cout<<"Matricata ne e simetricna"<<endl;
    }
    return 0;
}