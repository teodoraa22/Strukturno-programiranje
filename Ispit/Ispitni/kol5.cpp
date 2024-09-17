//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    int n, interesen;
    cin>>n;
    if(n<10){
        cout<<"Brojot ne e validen";
        return 0;
    }
    for (int i = 1; i < n; ++i) {
        int tmp=i;
        int reverse=0;
        int count=0;
        while(tmp){
            int lc=tmp%10;
            reverse=reverse*10+lc;
            count++;
            tmp/=10;
        }
        if(reverse%count==0){
            interesen=i;
        }
    }
    cout<<interesen;
    return 0;
}
