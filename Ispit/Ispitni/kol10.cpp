//
// Created by Davor on 11/18/2023.
//
#include <iostream>
using namespace std;
int main(){
    int zbir=0,broj=0;
    char znak;
    while(cin>>noskipws>>znak){
        if(znak=='!')
            break;
        if(znak>='0' && znak<='9') {
            broj = (broj*10) + znak - '0';
        }
        else {
            zbir += broj;
            broj = 0;
        }
    }
    cout<<zbir+broj;
    return 0;
}