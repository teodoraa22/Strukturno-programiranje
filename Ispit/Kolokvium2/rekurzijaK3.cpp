//
// Created by Teodora on 1/5/2024.
//
/*
 * Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
 * Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
 * За секој од нив да се испечати максималната цифра во посебен ред.
 */
#include<iostream>
using namespace std;

int maxCifra(int broj)
{
    if(broj < 10)
        return broj;
    if(broj % 10 > maxCifra(broj / 10))
        return broj % 10;
    return maxCifra(broj / 10);
}

int main(){
    int broj;
    while(cin >> broj){
        cout << maxCifra(broj) << endl;
    }
    return 0;
}