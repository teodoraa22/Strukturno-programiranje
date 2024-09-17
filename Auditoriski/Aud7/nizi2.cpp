//
// Created by Teodora on 12/3/2023.
//
#include<iostream>
using namespace std;

int main(){
    int skalarenProizvod = 0;
    int vektor1[100];
    int vektor2[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>vektor1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin>>vektor2[i];
    }

    for (int i = 0; i < n; ++i) {
        skalarenProizvod += vektor1[i] * vektor2[i];
    }

    cout<<skalarenProizvod;
    return 0;
}