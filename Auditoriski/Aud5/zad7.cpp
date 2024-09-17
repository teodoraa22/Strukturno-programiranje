//
// Created by Davor on 11/11/2023.
//
#include<iostream>
using namespace std;
int main(){
    int broj, max;
    while(cin >> broj){
        if(broj>=100) continue;
        if(max<broj) {
            max = broj;
        }
    }
    cout<<max;
    return 0;
}
