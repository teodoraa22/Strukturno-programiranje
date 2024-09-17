//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

int isPrime(int broj, int delitel)
{
    if(delitel == broj){
        return 1;
    }
    if(broj % delitel){
        return 0;
    }
    return isPrime(broj, delitel+1);
}
/*
 * n    delitel
 * 7    2
 * 7    3
 * 7    4
 * 7    5
 * 7    6
 * 7    7 (delitel == broj)
 */

int findNextPrime(int broj)
{
    if(isPrime(broj, 2)){
        return broj;
    }
    return findNextPrime(broj + 1);
}
/*
 * Primer 573
 * 574 ne e prost 574+1
 * 575 ne e prost 575+1
 * 576 ne e prost 576+1
 * 577 e prost return 576+1 (kje vrati 577)
 */

int main(){
    int broj;
    cin>>broj;
    int next = findNextPrime(broj);
    cout<<next<<" - "<<broj<<" = "<<next - broj<<endl;
    return 0;
}