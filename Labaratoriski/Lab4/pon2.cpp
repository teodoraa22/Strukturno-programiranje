//
// Created by Teodora on 11/19/2023.
//
#include<iostream>
using namespace std;

int main(){
    int x, broj;
    int countX=0, countBroj=0;
    cin>>x;
    while(x>0){
        countX++;
        x/=10;
    }
    while(cin>>broj){
        int tmp=broj;
        countBroj=0;
        while(tmp>0){
            countBroj++;
            tmp/=10;
        }
        if(countX==countBroj){
            cout<<broj<<endl;
        }
    }
    return 0;
}