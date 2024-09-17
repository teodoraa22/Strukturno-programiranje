//
// Created by Teodora on 11/19/2023.
//

#include<iostream>
using namespace std;

int main(){
    int x, broj;
    cin>>x;
    cin>>broj;
    int obraten=0;
    int tmp=broj;
    while(tmp>0){
        int c=tmp%10;
        obraten=obraten*10+c;
        tmp/=10;
    }
    return 0;
}
