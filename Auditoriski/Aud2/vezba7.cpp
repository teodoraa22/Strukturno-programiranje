//
// Created by Teodora on 10/19/2023.
//Програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура

#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Vnesi dva broja: \n";
    cin >> x >> y;
    if(x>y)
        cout << "Maksimum e: " << x << endl;
    else
        cout << "Maksimum e: " << y << endl;
    return 0;
}