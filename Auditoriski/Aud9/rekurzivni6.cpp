//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

int NZD(int m, int n) {
    if(m % n == 0)
        return n;
    return NZD(n, m % n);
}

int main(){
    int niza[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    int nzd = NZD(niza[0], niza[1]);
    for (int i = 2; i < n; ++i) {
        nzd = NZD(nzd, niza[i]);
    }

    cout<<nzd;
    return 0;
}