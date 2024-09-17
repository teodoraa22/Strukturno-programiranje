//
// Created by Teodora on 11/7/2023.
//
#include<iostream>
using namespace std;

int main(){
    int A, B;
    cin>>A>>B;
    int suma = 0;
    for(int i = A; i < B; i++)
    {
        if(i%3==0)
            suma=suma+i;
    }
    cout<<suma;
    return 0;
}