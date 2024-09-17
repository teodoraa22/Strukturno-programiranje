//
// Created by Davor on 11/11/2023.
//
#include<iostream>
using namespace std;
int main(){
    int broj, max1, max2;
    if(max2>max1){
        int tmp=max1;
        max1=max2;
        max2=tmp;
    }
    while(cin>>broj){
        if(broj>max1){
            max2=max1;
            max1=broj;
        }
        else if(broj>max2){
            max1=max2;
            max2=broj;
        }
    }
    cout<<max1<<endl;
    cout<<max2<<endl;
    return 0;
}
