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

int main(){
    int count=0;
    for (int i = 1; i < 999; ++i) {
        if(prost(i) && prost(i + 2)){
            cout<<"("<<i<<", "<<i+2<<")"<<endl;
            count++;
        }
    }
    cout<<count;
    return 0;
}
