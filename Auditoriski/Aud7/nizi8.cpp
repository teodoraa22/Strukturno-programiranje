//
// Created by Teodora on 14.1.2024.
//
#include<iostream>
using namespace std;

int main(){
    int niza1[100], niza2[100];
    char niza3[100];
    int size;

    cin>>size;
    for (int i = 0; i < size; ++i) {
        cin>>niza1[i];
    }

    for (int i = 0; i < size; ++i) {
        cin>>niza2[i];
    }

    for (int i = 0; i < size; ++i) {
        if(niza1[i] == niza2[i])
        {
            niza3[i] = '=';
        }
        else if(niza1[i] == niza2[i + 1])
        {
            niza3[i] = '+';
        }
        else
            niza3[i] = '-';
    }

    for (int i = 0; i < size; ++i) {
        cout<<niza3[i]<<" ";
    }
    return 0;
}
