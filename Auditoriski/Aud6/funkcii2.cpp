//
// Created by Teodora on 11/27/2023.
//

#include<iostream>
using namespace std;

int zbir(int number) {
    return number%100 + number/100;
}

int main(){
    int count = 0;
    for (int i = 1000; i < 10000; ++i) {
        if(i % zbir(i) == 0){
            cout<<i<<endl;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
