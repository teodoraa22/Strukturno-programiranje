//
// Created by Teodora on 10/19/2023.
//Програма каде од тастатура ќе се внесе цена на производ, број на рати на кои се исплаќа и камата
//Tреба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот

#include<iostream>
using namespace std;

int main(){
    float cena, kamata, vkupno, rata, brRati;
    cout << "Vnesi cena na proizvodot: " << endl;
    cin >> cena;
    cout << "Vnesi broj na rati: " << endl;
    cin >> brRati;
    cout << "Vnesi kamata: " << endl;
    cin >> kamata;
    vkupno = cena * (1+kamata/100);
    rata = vkupno/brRati;
    cout << "Iznosot na rati e: " << rata << endl;
    cout << "Vkupnata suma sto kje se isplati proizvodot e: " << vkupno << endl;
    return 0;
}