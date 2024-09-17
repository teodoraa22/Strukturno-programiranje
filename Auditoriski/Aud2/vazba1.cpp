//
// Created by Teodora on 10/19/2023.
// Програма која чита знак од тастатура и во зависнот од тоа дали е мала или голема буква печати 1 или 0

#include<iostream>
using namespace std;

int main(){
    char a;
    bool gb;
    cout << "Vnesi nekoj znak: " << endl;
    cin >> a;
    gb = (a>='A') && (a<='Z');
    if((a>='0') && (a<='9'))
        cout << "Znakot e cifra!" << endl;
    else if(gb)
    {
        cout << gb << endl;
    }
    else
    {
        cout << gb << endl;
    }
    return 0;
}