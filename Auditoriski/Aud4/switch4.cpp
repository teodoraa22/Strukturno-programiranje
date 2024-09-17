//
// Created by Teodora on 11/4/2023.
//
#include<iostream>
using namespace std;

int main(){
    float broj1, broj2, rezultat;
    char op;
    cout<<"Vnesete broj1 operator i broj2:";
    cin>>broj1>>op>>broj2;
    switch(op){
        case '+': rezultat=broj1+broj2; break;
        case '-': rezultat=broj1-broj2; break;
        case '*': rezultat=broj1*broj2; break;
        case '/':
            if(broj2!=0){
                rezultat=broj1/broj2;
            }
            else{
                cout<<"Ne se deli so nula!"<<endl;
            }
            break;
        default:cout<<"Nepoznat operator!"<<endl;
    }
    cout<<broj1<<" "<<op<<" "<<broj2<<" = "<<rezultat;
    return 0;
}
