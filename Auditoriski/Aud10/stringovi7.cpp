//
// Created by Teodora on 05.2.2024.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void promeni(char *niza){
    int j = 0;
    for (int i = 0; i < strlen(niza); ++i) {
        if(isalpha(niza[i])){
            if(isupper(niza[i])){
                niza[j] = tolower(niza[i]);
            }
            else if(islower(niza[i])){
                niza[j] = toupper(niza[i]);
            }
            j++;
        }
    }
    niza[j] = '\0';
}

int main(){
    char niza[100];

    cin.getline(niza, strlen(niza));

    promeni(niza);
    puts(niza);
    return 0;
}