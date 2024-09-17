//
// Created by Teodora on 10/19/2023.
/*Програма каде од тастатура ќе се внесе датумот на раѓање во формат (ddmmgggg),
  a на екран ќе го испечати денот и месецот на раѓање*/

#include<iostream>
using namespace std;

int main(){
    long int datum;
    int den, mesec;
    cout << "Vnesi datum na ragjanje: \n";
    cin >> datum;
    den = datum / 1000000;
    mesec = (datum / 10000) % 100 ;
    cout << den << "." << mesec;
    return 0;
}