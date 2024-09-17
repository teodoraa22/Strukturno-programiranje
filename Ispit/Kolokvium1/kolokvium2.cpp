//
// Created by Teodora on 11/12/2023.
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
    for(int i=1; i<n; i++){
        int count=0;
        int reverse=0;
        int tmp=i;
        while(tmp>0){
            int c=tmp%10;
            reverse=reverse*10+c;
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