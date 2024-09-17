//
// Created by Teodora on 10/19/2023.
/*Програма каде од тастатура ќе се внесе трицифрен цел број ќе ја испечати
  најзначајната и најмалку значајната цифра од бројот*/

#include<iostream>
using namespace std;

int main(){
    int broj;
    cout << "Vnesi tricifren cel broj: \n";
    cin >> broj;
    cout << "Najznacajna cifra e " << (broj/100);
    cout << ",a najmalku znacajna e " << (broj%10) << endl;
    return 0;
}
