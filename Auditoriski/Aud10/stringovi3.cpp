//
// Created by Teodora on 16.1.2024.
//
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char niza[100];
    int pozicija, dolzina;

    cin.getline(niza, 100);

    cout<<"Pozicija: ";
    cin>>pozicija;
    pozicija--;

    cout<<"Dolzina: ";
    cin>>dolzina;

    //Resenie: 1
    for (int i = pozicija; i < pozicija + dolzina; ++i) {
        cout<<niza[i];
    }

    //Resenie: 2
    char podNiza[100];
    strncpy(podNiza, niza + pozicija, dolzina);
    podNiza[dolzina] = '\0';
    cout<<podNiza;
    return 0;
}