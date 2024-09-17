//
// Created by Teodora on 12/3/2023.
//
#include<iostream>
using namespace std;

int main(){
    int niza[100];
    int size;

    cin>>size;
    for (int i = 0; i < size; ++i) {
        cin>>niza[i];
    }

    //1. posledniot element go stavame vo temp
    int temp = niza[size-1];

    //2. shiftanje na site elementi za edno vo desno
    for (int i = size - 1; i >= 1; i--) {
        niza[i] = niza[i-1];
    }

    //3. go vrakjame posledniot element na 0ta pozicija/prv element
    niza[0] = temp;

    for (int i = 0; i < size; ++i) {
        cout<<niza[i]<<" ";
    }
    return 0;
}