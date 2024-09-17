//
// Created by Teodora on 10/24/2023.
//
#include<iostream>
using namespace std;

int main(){
    int a, b, h;
    float P;
    cout << "Vnesi dolzina na katetite: \n";
    cin >> a >> b;
    h = (a*a) + (b*b);
    P = (a*b) / 2.0;
    cout << h << endl;
    cout << P << endl;
    return 0;
}
