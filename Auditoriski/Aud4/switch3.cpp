//
// Created by Teodora on 11/4/2023.
//
#include<iostream>
using namespace std;

int main(){
    char znak;
    cin>>znak;
    switch(znak){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Vnesena e samoglaska!"<<endl;
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
            cout<<"Vnesena e cifra!"<<endl;
            break;
        default: cout<<"Vneseno e drugo!"<<endl;
    }
    return 0;
}
