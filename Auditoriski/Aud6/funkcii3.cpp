//
// Created by Teodora on 11/27/2023.
//

#include<iostream>
using namespace std;

bool prost(int number) {
    // i = delitel
    for (int i = 2; i < number; ++i) {
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=n+1; ; i++){
        if(prost(i)){
            cout<< i-n;
            break;
        }
    }
    return 0;
}
