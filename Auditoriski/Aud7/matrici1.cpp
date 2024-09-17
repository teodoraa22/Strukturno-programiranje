//
// Created by Teodora on 12/10/2023.
//
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int matrica[100][100];
    int size;
    int min = INT_MAX;
    int max = INT_MIN;

    cin>>size;
    //vnesuvanje na elementi na matricata
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin>>matrica[i][j];
        }
    }

    // go naogjame max i min
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(matrica[i][j] > max){
                max = matrica[i][j];
            }
            if(matrica[i][j] < min){
                min = matrica[i][j];
            }
        }
    }

    int razlika = max - min;

    // gi zamenuvame elementite na glavnata dijagonala so razlikata
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(i == j){
                matrica[i][j] = razlika;
            }
        }
    }

    //pecatenje na matricata
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
