//
// Created by Teodora on 11/5/2023.
// Напишете програма која ќе прочита три цели броја a, b, и c,
// истите ќе ги подреди по големина (во растечки редослед),
// и потоа ќе ја отпечати подредената листа.
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        float tmp=b;
        b=a;
        a=tmp;
    }
    if(a>c){
        float tmp=c;
        c=a;
        a=tmp;
    }
    if(b>c){
        float tmp=c;
        c=b;
        b=tmp;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
