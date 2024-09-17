//
// Created by Teodora on 16.1.2024.
//
#include<iostream>
#include<cstring>
using namespace std;

int dolzina(char niza[]){
    int count = 0;
    for (int i = 0; niza[i] != '\0'; ++i) {
        count++;
    }
    return count;
}

int dolzina_rekurzivno(char *niza) {
    if(*niza == '\0')
        return 0;
    return 1 + dolzina(niza+1);
}

int main(){
    char niza[100];

    cin.getline(niza, 100);

    cout<<dolzina(niza)<<endl;
    cout<<dolzina_rekurzivno(niza);
    return 0;
}