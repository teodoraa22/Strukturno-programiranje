//
// Created by Teodora on 11/5/2023.
//
#include<iostream>
using namespace std;

int main(){
    int broj1, broj2;
    cin>>broj1>>broj2;
    if(broj1<0 || broj2<0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    if(broj1==0 || broj2==0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    if(broj2>broj1){
        int tmp=broj1;
        broj1=broj2;
        broj2=tmp;
    }
    broj1/=10;
    while(broj2>0){
        int lc1=broj1%10;
        int lc2=broj2%10;
        if(lc1!=lc2){
            break;
        }
        broj1/=10;
        broj2/=100; //ciftara od broj1 se proveruva samo so cifrata na parna pozicija od broj2
    }
    if(broj2==0){
        cout<<"PAREN";
    }else{
        cout<<"NE";
    }
    return 0;
}