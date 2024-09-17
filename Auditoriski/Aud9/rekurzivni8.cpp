//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

int NZD(int m, int n) {
    int ostatok = m % n;
    if(ostatok == 0)
        return n;
    return NZD(n, ostatok);
}

int NZS(int m, int n)
{
    if(NZD(m,n) == 0)
        return 0;
    return m / NZD(m,n) * n;
}

int main(){
    int niza[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    int nzs = NZS(niza[0], niza[1]);
    for (int i = 2; i < n; ++i) {
        nzs = NZS(nzs, niza[i]);
    }

    cout<<nzs;
    return 0;
}