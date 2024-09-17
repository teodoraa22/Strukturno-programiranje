//
// Created by Teodora on 10/20/2023.
//Програма што проверува дали дадена година што се вчитува од тастатура е престапна или не

#include<iostream>
using namespace std;

int main(){
    int godina;
    cout << "Vnesi godina: \n";
    cin >> godina;
    if(godina%4==0 && godina%100!=0 || godina%400==0)
        cout << "Godinata e prestapna! \n";
    else
        cout << "Godinata ne e prestapna! \n";
    return 0;
}