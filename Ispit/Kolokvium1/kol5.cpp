//
// Created by Teodora on 11/12/2023.
//
#include<iostream>
using namespace std;
int main(){
    int zbir=0, vrednost=0;
    char znak;
    string broj="ednocifren";
    while(cin>>noskipws>>znak){
        if(isdigit(znak) && broj=="ednocifren"){
            vrednost = znak - '0';
            broj="dvocifren";
        }
        else if(isdigit(znak) && broj=="dvocifren"){
            vrednost = vrednost * 10 + znak-'0';
        }
        else if (!isdigit(znak)) {
        zbir += vrednost;
        vrednost = 0;
        broj = "ednocifren";
    }
        if (znak=='!') break;
    }
    cout<<zbir;
    return 0;
}