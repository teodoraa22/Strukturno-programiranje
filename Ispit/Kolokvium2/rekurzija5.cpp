//
// Created by Teodora on 14.1.2024.
//
#include<iostream>
#include<climits>
using namespace std;

int zbirNaCifri(int broj)
{
    if(broj == 0)
        return 0;
    if(broj%10 < 5)
        return broj%10 + zbirNaCifri(broj/10);
    return zbirNaCifri(broj/10);
}

int main(){
    int n, broj;
    int maxZbir = INT_MIN;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>broj;

        if(zbirNaCifri(broj) > maxZbir){
            maxZbir = zbirNaCifri(broj);
        }
    }

    cout<<maxZbir;
    return 0;
}
