//
// Created by Teodora on 12/3/2023.
//
#include<iostream>
using namespace std;

int main(){
    int niza1[100];
    int niza2[100];
    int size1, size2;

    cin>>size1;
    for (int i = 0; i < size1; ++i) {
        cin>>niza1[i];
    }

    cin>>size2;
    for (int i = 0; i < size2; ++i) {
        cin>>niza2[i];
    }

    if(size1 != size2){
        cout<<"Nizite se razlicni spored goleminata"<<endl;
        return 0;
    }

    for (int i = 0; i < size1; ++i) {
        if(niza1[i] != niza2[i]){
            cout<<"Nizite se razlicni na pozicija "<<i<<endl;
            return 0;
        }
    }

    cout<<"Nizite se isti!"<<endl;
    return 0;
}