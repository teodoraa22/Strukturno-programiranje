//
// Created by Teodora on 14.1.2024.
//
//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви),
//како и елементите на матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги промени редиците на матрицата
//на следниот начин:
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0

#include<iostream>
using namespace std;

int main() {
    int x;
    int matrica[100][100];
    int red, kolona;

    cin >> x;
    cin >> red >> kolona;
    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            cin >> matrica[i][j];
        }
    }

    for (int i = 0; i < red; ++i) {
        int zbirRed = 0;
        for (int j = 0; j < kolona; ++j) {
            zbirRed += matrica[i][j];
        }
        for (int j = 0; j < kolona; ++j) {
            if (zbirRed > x) {
                matrica[i][j] = 1;
            }
            else if (zbirRed < x) {
                matrica[i][j] = -1;
            }
            else{
                matrica[i][j] = 0;
            }
        }
    }


    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
