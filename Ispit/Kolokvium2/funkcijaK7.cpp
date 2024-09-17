//
// Created by Teodora on 15.1.2024.
//
#include<iostream>
using namespace std;

void preuredi(int niza[], int n)
{
    int temp[100];
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if(niza[i] % 2 == 0){
            temp[j] = niza[i];
            j++;
        }
    }

    for (int i = n-1; i >= 0; ++i) {
        if(niza[i] % 2 == 1){
            temp[j] = niza[i];
            j++;
        }
    }

    for (int i = 0; i < n; ++i) {
        niza[i] = temp[i];
    }
}

int main(){
    int niza[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    preuredi(niza, n);

    for (int i = 0; i < n; ++i) {
        cout<<niza[i]<<" ";
    }
    return 0;
}