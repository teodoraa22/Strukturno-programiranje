//
// Created by Teodora on 11/27/2023.
//

#include<iostream>
using namespace std;

bool appears(int first, int second){
    int digitA, digitB;

    while(first){
        digitA = first % 10;
        first /= 10;

        bool found = false;

        while(second){
            digitB = second % 10;
            if(digitA == digitB){
                found = 1;
                break;
            }
            second/=10;
        }
        if(!found){
            return false;
        }
    }
    return true;
}

int main(){
    int n, a, b;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a>>b;
        if(appears(a, b)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
