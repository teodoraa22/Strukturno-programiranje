//
// Created by Teodora on 15.1.2024.
//
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int matrica[100][100];
    int niza[100], as;
    int red, kolona;

    cin>>red>>kolona;
    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            cin>>matrica[i][j];
        }
    }

    for (int i = 0; i < red; ++i) {
        int zbirNaRed = 0;
        for (int j = 0; j < kolona; ++j) {
            zbirNaRed += matrica[i][j];
            as = zbirNaRed/kolona;
        }

        int rastojanie, maxRastojanie = INT_MIN, index;
        for (int j = 0; j < kolona; ++j) {
            rastojanie = abs(matrica[i][j] - as);
            if(rastojanie > maxRastojanie){
                maxRastojanie = rastojanie;
                index = j;
            }
        }

        niza[i] = matrica[i][index];
    }

    for (int i = 0; i < red; ++i) {
        cout<<niza[i]<<" ";
    }
    return 0;
}