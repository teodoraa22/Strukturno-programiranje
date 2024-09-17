//
// Created by Teodora on 15.1.2024.
//
//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
//Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност)
//на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.
//Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите
//(при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int zbirPrvaPolovina, zbirVtoraPolovina;
    int matrica[100][100];
    int red, kolona;

    cin>>red>>kolona;
    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            cin>>matrica[i][j];
        }
    }

    for(int i = 0; i < red; i++) {
        zbirPrvaPolovina = 0;
        zbirVtoraPolovina = 0;

        for(int j = 0; j < kolona/2; j++) {
            zbirPrvaPolovina += matrica[i][j];
        }

        if (kolona % 2 != 0) {
            zbirPrvaPolovina += matrica[i][kolona/2];
        }

        for(int j = kolona/2; j < kolona; j++) {
            zbirVtoraPolovina += matrica[i][j];
        }

        if (kolona % 2 != 0) {
            matrica[i][kolona/2] = abs(zbirPrvaPolovina - zbirVtoraPolovina);
        } else {
            matrica[i][kolona/2] = abs(zbirPrvaPolovina - zbirVtoraPolovina);
            matrica[i][kolona/2-1] = abs(zbirPrvaPolovina - zbirVtoraPolovina);
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