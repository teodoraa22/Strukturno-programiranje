//
// Created by Teodora on 16.1.2024.
//
#include<iostream>
#include<cstring>
using namespace std;

int count(char string[], char karakter) {
    int count = 0;
    for (int i = 0; i < strlen(string) ; ++i) {
        if(string[i] == karakter){
            count++;
        }
    }
    return count;
}

int count_rekurzivno(char *string, char karakter) {
    if(*string == '\0')
        return 0;
    if(*string == karakter)
        return 1 + count_rekurzivno(string+1, karakter);
    return count_rekurzivno(string+1, karakter);
}

int main(){
    char string[100];
    char karakter;

    cin.getline(string, 100);

    cin>>karakter;

    cout<<count(string, karakter)<<endl;
    cout<<count_rekurzivno(string, karakter);
    return 0;
}


