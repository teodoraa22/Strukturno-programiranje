//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

int zbirNaCifri(int broj)
{
    if(broj == 0)
        return 0;
    return broj % 10 + zbirNaCifri(broj / 10);
}
/*
 * broj = 1234
 * 4 + 6 = 10
 * broj = 123
 *      3 + 3 = 6
 * broj = 12
 *          2 + 1 = 3
 * broj = 1
 *              1 + 0 = 1
 * broj = 0
 *                  0
 */

int main(){
    int broj;
    cin>>broj;
    cout<<zbirNaCifri(broj);
    return 0;
}