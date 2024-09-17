//
// Created by Teodora on 1/4/2024.
//
/*
 * Да се напише функција за наоѓање на максималната цифра од даден цел број.
 * Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
 * За секој од нив да се испечати максималната цифра во посебен ред.
 */
#include<iostream>
#include<climits>
using namespace std;

int maxCifra(int broj){
    int max = INT_MIN;
    while (broj){
        if(broj % 10 > max){
            max = broj % 10;
        }
        broj /= 10;
    }
    return max;
}

int main(){
    int broj;
    while(cin>>broj) {
        cout << maxCifra(broj) << endl;
    }
    return 0;
}