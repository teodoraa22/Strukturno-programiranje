//
// Created by Teodora on 05.2.2024.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int slozena(char *lozinka) {
    int bukva = 0, broj = 0, znak = 0;
    for (int i = 0; i < strlen(lozinka); ++i) {
        if(isalpha(lozinka[i])){
            bukva++;
        }
        if(isdigit(lozinka[i])){
            broj++;
        }
        if(!isspace(lozinka[i]) && !isalnum(lozinka[i])){
            znak++;
        }
    }
    return (bukva>0 && broj>0 && znak>0);
}

int main(){
    char lozinka[100];

    cin.getline(lozinka, strlen(lozinka));
    lozinka[strlen(lozinka)-1] = '\0';

    if(slozena(lozinka)){
        cout<<"Validna";
    }else{
        cout<<"Ne e validna";
    }
    return 0;
}