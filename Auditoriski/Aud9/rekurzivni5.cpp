//
// Created by Teodora on 1/4/2024.
//
#include<iostream>
using namespace std;

int count(int n)
{
     if(n == 0)
         return 0;
     if(n % 10 == 8 && n / 10 % 10 ==8)
         return 2 + count(n/10);
     if(n % 10 == 8)
         return 1 + count(n / 10);
    return count(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<"count8("<<n<<") -> "<<count(n);
    return 0;
}