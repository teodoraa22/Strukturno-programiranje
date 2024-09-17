//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    int broj1, broj2;
    cin>>broj1>>broj2;
    if(broj1<0 || broj2<0){
        cout<<"Invalid input";
        return 0;
    }
    if(broj1==0 || broj2==0){
        cout<<"Invalid input";
        return 0;
    }
    if(broj2>broj1){
        int tmp=broj1;
        broj1=broj2;
        broj2=tmp;
    }
    broj1/=10;
    while(broj2>0){
        int c1=broj1%10;
        int c2=broj2%10;
        if(c1!=c2)
            break;
        broj1/=100;
        broj2/=10;
    }
    if(broj2==0){
        cout<<"PAREN";
    }else{
        cout<<"NE";
    }
    return 0;
}
