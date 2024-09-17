//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

int zbirNaElementi(int niza[], int n)
{
    if(n == 0) //индексот на елементот е 0
        return niza[0]; //треба да го вратам првиот елемент од низата
    return niza[n] + zbirNaElementi(niza, n-1);
}
/*
 * niza = 1 2 3 4 5 6
 * 6 + 5 + 4 + 3 + 2 + 1 = 21
 * niza[0] = 1
 */

int main(){
    int niza[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    cout<<zbirNaElementi(niza, n-1);
    return 0;
}