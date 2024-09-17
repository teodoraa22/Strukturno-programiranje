//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    int broj;
    int Max=0;
    while(cin>>broj){
        int suma=Max;
        int max_cifra=0;
        int tmp=broj;
        while(tmp>0){
            int pc=tmp%10;
            if(max_cifra<pc){
                max_cifra=pc;
            }
            suma+=pc;
            tmp/=10;
        }
        Max=max_cifra;
        cout<<broj<<": "<<suma<<endl;
    }
    return 0;
}