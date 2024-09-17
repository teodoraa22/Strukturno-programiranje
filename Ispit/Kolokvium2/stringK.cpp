//
// Created by Teodora on 10.2.2024.
//
#include<iostream>
using namespace std;

void transform(int niza[], int dolzina) {
    int temp[100];
    int j = 0;

    for (int i = 0; i < dolzina; ++i) {
        if(niza[i] % 2 == 0){
            temp[j] = niza[i];
            ++j;
        }
    }

    for (int i = dolzina-1; i >= 0; --i) {
        if(niza[i] % 2 == 1){
            temp[j] = niza[i];
            ++j;
        }
    }

    for (int i = 0; i < dolzina; ++i) {
        niza[i] = temp[i];
    }
}

int main(){
    int niza[100];
    int dolzina;

    cin>>dolzina;
    for (int i = 0; i < dolzina; ++i) {
        cin>>niza[i];
    }

    transform(niza, dolzina);

    for (int i = 0; i < dolzina; ++i) {
        cout<<niza[i]<<" ";
    }
    return 0;
}
