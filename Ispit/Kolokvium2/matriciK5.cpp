//
// Created by Teodora on 15.1.2024.
//
//За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2) и елементите на матрицата (реални броеви).
//Нека X e збирот од елементите под главната дијагонала во матрицата А. Нека Y е збирот од елементите под споредната дијагонала во матрицата А.
//Да се креира нова матрица B на следниот начин:
//сите елементи од главната дијагонала во матрицата B треба да имаат вредност X
//сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y
//ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y
//сите останати елементи во матрицата B имаат вредност 0

#include<iostream>
using namespace std;

int main(){
    float matricaA[100][100];
    float matricaB[100][100];
    float X = 0, Y = 0;      //X=zbir na elementi pod glavna dijagonala; Y=zbir na elementi pod sporedna dijagonala
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matricaA[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i>j){
                X += matricaA[i][j];
            }
            if(i+j > n-1){
                Y += matricaA[i][j];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j){
                matricaB[i][j] = X;
            }
            else if(i+j == n-1){
                matricaB[i][j] = Y;
            }
            else{
                matricaB[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j && i+j == n-1){
                matricaB[i][j] = X + Y;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<matricaB[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}