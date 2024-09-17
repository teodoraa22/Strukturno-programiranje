//
// Created by Teodora on 10/19/2023.
//Програма каде од тастатура ќе се внесе цена на производ, а потоа ќе ја испечати неговата цена со пресметан ддв

#include<iostream>
using namespace std;

int main(){
    float c, d;
    cout << "Vnesi cena na proizvod: "<<endl;
    cin >> c;
    d = c * 1.18;
    cout << "Negovata cena so presmetan ddv e: " << d << endl;
    return 0;
}
