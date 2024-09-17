//
// Created by Teodora on 14.1.2024.
//
//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона
//ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.
//Пример за N = 3
//        Влез: 3
//        1  2  3  4  5  6
//        7  8  9  10 11 12
//        13 14 15 16 17 18
//        Излез:
//        1  2 3
//        7  8  9
//        13 14 15
//        4  5  6
//        10 11 12
//        16 17 18
#include<iostream>
using namespace std;

int main(){
    int matricaA[100][100];
    int matricaB[100][100];
    int size;

    cin>>size;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 2*size; ++j) {
            cin>>matricaA[i][j];
        }
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            matricaB[i][j]=matricaA[i][j];
        }
    }

    for(int i=0;i<size;i++){
        for(int j=size;j<2*size;j++){
            matricaB[i+size][j-size]=matricaA[i][j];
        }
    }

    for (int i = 0; i < 2*size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout<<matricaB[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}