//
// Created by Teodora on 12/3/2023.
//
#include<iostream>
using namespace std;

int main(){
    int niza[100];
    int n;
    int k;  //mesta vo desno

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    cin>>k;
    int temp[100];

    //1. Poslednite m elementi gi smestuvame vo temp niza(Zosto vo niza? Zatoa sto imame povekje elementi k)
    for (int i = 0; i < k; ++i) {
        temp[i] = niza[n - k + i];
    }

    //2. Shiftanje na elementite posle prvite m elementi
    for (int i = n - 1; i >= k ; i--) {
        niza[i] = niza[i - k];
    }

    //3. Gi stavame elementite od temp nizata na pocetokot od niza
    for (int i = 0; i < k; ++i) {
        niza[i] = temp[i];
    }

    for (int i = 0; i < n; ++i) {
        cout<<niza[i]<<" ";
    }
    return 0;
}