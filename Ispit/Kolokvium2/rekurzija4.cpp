//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

int slicni(int a, int b) {
    if(a==0 || b==0)
        return 0;
    if(a%10 == b%10)
        return 1 + slicni(a/10, b/10);
    return slicni(a/10, b/10);
}

int main(){
    int a, b;
    cin>>a;

    int maxSlicni = 0;
    int maxBroj;
    while (cin>>b){
        if(slicni(a, b) > maxSlicni){
            maxSlicni = slicni(a, b);
            maxBroj = b;
        }
    }

    cout<<maxBroj;
    return 0;
}