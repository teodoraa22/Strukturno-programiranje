//
// Created by Teodora on 11/7/2023.
//
#include<iostream>
using namespace std;

int main(){
    double procent0, prag1, procent1, prag2, procent2, iznos;
    double stapka;
    cin>>procent0>>prag1>>procent1>>prag2>>procent2>>iznos;
    if(iznos <= prag1){
        stapka = iznos * 0.1;
    }
    else if(iznos >= prag1 && iznos <= prag2){
        stapka = ((prag1 * 0.1) + ((prag2 - prag1) * 0.2));
    }
    else {
        stapka = (prag1 * 0.1) + ((prag2 - prag1) * 0.2) + ((iznos - prag2) * 0.3);
    }
    cout << stapka;
    return 0;
}
