//
// Created by Teodora on 10/13/2023.
//Програма која чита голема буква од стандарден влез и ја печати истата како мала буква

#include<iostream>
using namespace std;

int main() {
    char c;
    cout << "Vnesi golema bukva: ";
    cin >> c;
    cout << "Vnesenata bukva " << c << " kako mala bukva se pisuva " << char (c + ('a' - 'A')) << endl;
    return 0;
}