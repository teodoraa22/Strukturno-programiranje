//
// Created by Teodora on 11/4/2023.
//
#include<iostream>
using namespace std;

int main(){
    int vrednost, izbor;
    cout<<"Vnesete pocetna vrednost: ";
    cin>>vrednost;
    do{
        do{
            cout<<"Meni"<<endl;
            cout<<"1-Zgolemi"<<endl;
            cout<<"2-Namali"<<endl;
            cout<<"3-Dupliraj"<<endl;
            cout<<"0-Kraj"<<endl;
            cout<<"Izbor: ";
            cin>>izbor;
        }while(izbor<0 || izbor>3);

        switch(izbor){
            case 1: vrednost++; break;
            case 2: vrednost--; break;
            case 3: vrednost*=2; break;
            case 0: cout<<"Kraj \n"; break;
            default:cout<<"Nevaliden izbor!"; break;
        }
        cout<<"Vrednosta e "<<vrednost<<endl;
    }while(izbor!=0);
    return 0;
}
