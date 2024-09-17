//
// Created by Davor on 11/12/2023.
//

#include<iostream>
using namespace std;
int main(){
    int n, broj;
    cin>>n;

    for(int i=0; i<n; i++){

        cin>>broj;
        int ostatok = n%5;

        switch (ostatok) {
            case 0: cout<<"-----"<<endl; break;
            case 1: cout<<".----"<<endl; break;
            case 2: cout<<"..---"<<endl; break;
            case 3: cout<<"...--"<<endl; break;
            default: cout<<"....-"<<endl; break;
        }
    }
    return 0;
}
