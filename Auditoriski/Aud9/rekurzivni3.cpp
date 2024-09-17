//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

float x(int n)
{
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    return (n-1) * 1.0 * x(n-1) / n + x(n-2) / n;
}

int main(){
    int n;
    cin>>n;
    cout<<x(n);
    return 0;
}