//
// Created by Teodora on 12/3/2023.
//
#include<iostream>
using namespace std;

int main(){
    int zbirParniPozicii=0, broj_parni=0;
    int zbirNeparniPozicii=0, broj_neparni=0;
    int niza[100];
    int size;

    cin>>size;
    for (int i = 0; i < size; ++i) {
        cin>>niza[i];
    }

    for (int i = 0; i < size; ++i) {
        if(i % 2 == 0){
            zbirParniPozicii += niza[i];
            broj_parni++;
        }else{
            zbirNeparniPozicii += niza[i];
            broj_neparni++;
        }
    }

    cout<<zbirParniPozicii<<endl;
    cout<<zbirNeparniPozicii<<endl;
    cout<<(float) broj_parni / broj_neparni;
    return 0;
}