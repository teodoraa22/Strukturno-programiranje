//
// Created by Teodora on 11/4/2023.
//
#include<iostream>
using namespace std;

int main(){
    char odgovor;
    cout<<"Dali SP e lesen predmet (d/n): ";
    cin>>odgovor;
    switch(odgovor){
        case 'D':
        case 'd':
            cout<<"I jas mislam taka!"<<endl;
            break;
        case 'N':
        case 'n':
            cout<<"Navistina?"<<endl;
            break;
        default:cout<<"Ova e da ili ne? "<<endl;
    }
    return 0;
}
