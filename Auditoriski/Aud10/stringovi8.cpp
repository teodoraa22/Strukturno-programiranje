//
// Created by Teodora on 05.2.2024.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void otstrani(char *str) {
    //prazni mesta od napred
    int prvZnakIndex = -1;
    for (int i = 0; i < strlen(str); ++i) {
        if(!isspace(str[i])){
            prvZnakIndex = i;
            break;
        }
    }

    strcpy(str, str+prvZnakIndex);

    //prazni mesta od krajot/desno
    for (int i = strlen(str)-1; i >= 0 ; --i) {
        if(!isspace(str[i])){
            str[i+1] = '\0';
            break;
        }
    }
}

int main(){
    char niza[100];

    cin.getline(niza, strlen(niza));

    otstrani(niza);
    cout<<niza;
    return 0;
}