//
// Created by Teodora on 12/3/2023.
//
//drugo resenie za nizi6
#include<iostream>
using namespace std;

int main(){
    int niza[100];
    int size;
    int m;  //m mesta vo desno

    cin>>size;
    for (int i = 0; i < size; ++i) {
        cin>>niza[i];
    }

    cin>>m;
    int temp[100];

    for (int i = 0; i < size; ++i) {
        temp[(i+m) % size] = niza[i];
    }

    for (int i = 0; i < size; ++i) {
        niza[i] = temp[i];
    }

    for (int i = 0; i < size; ++i) {
        cout<<niza[i]<<" ";
    }
    return 0;
}
