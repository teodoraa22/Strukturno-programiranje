//
// Created by Teodora on 11/27/2023.
//

#include<iostream>
using namespace std;

bool prost(int number) {
    for (int i = 2; i < number; ++i) {
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

int zbir(int broj) {
    int zbir=0;
    while(broj>0){
        zbir+=broj%10;
        broj/=10;
    }
    return zbir;
}

int main(){
    int count=0;
    for (int i = 1; i < 10000 ; ++i) {
        if(prost(i) && prost(zbir(i))){
            cout<<i<<endl;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
