//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

long faktorial(int n)
{
    if(n == 1)
        return 1;
    return n * faktorial(n-1);
}

int zbirNaPrviteKBroevi(int k)
{
    if(k == 0)
        return 0;
    return k + zbirNaPrviteKBroevi(k-1);
}

int main(){
    int k;
    cin >> k;
    int rezultat = 0;
    int s;
    for (int i = 1; i < k; ++i) {
        s = zbirNaPrviteKBroevi(i);
        rezultat += faktorial(s);
    }
    cout << rezultat << endl;
    return 0;
}