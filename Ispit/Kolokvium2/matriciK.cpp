//
// Created by Teodora on 1/7/2024.
//
//Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 и нејзините елементи.
//Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
//Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k се заменуваат со
//минималната вредност од матрицата А.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int matrica[100][100];
    int red, kolona;
    int r, k;
    int min = INT_MAX;

    cin>>red>>kolona;
    cin>>r>>k;
    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            cin>>matrica[i][j];
        }
    }

    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            if(matrica[i][j] < min){
                min = matrica[i][j];
            }
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            matrica[i][j] = min;
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