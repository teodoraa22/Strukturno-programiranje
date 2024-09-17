//
// Created by Teodora on 11/19/2023.
//

#include<iostream>
using namespace std;

int main(){
    int n, broj;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>broj;
        int ostatok=broj%5;
        switch (ostatok) {
            case 0: cout<<"-----"<<endl; break;
            case 1: cout<<".----"<<endl; break;
            case 2: cout<<"..---"<<endl; break;
            case 3: cout<<"...--"<<endl; break;
            case 4: cout<<"....-"<<endl; break;
            default: cout<<"....."<<endl; break;
        }
    }
    return 0;
}