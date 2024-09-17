//
// Created by Teodora on 05.2.2024.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int daliPalindrom(char *zbor) {
    int n = strlen(zbor);
    for (int i = 0; i < n/2; ++i) {
        if(zbor[i] != zbor[n-i-1])
            return 0;
    }
    return 1;
}

int daliPalindromRekurzivno(char *zbor, int start, int end) {
    if(start >= end)
        return 1;
    if(zbor[start] != zbor[end])
        return 0;
    return daliPalindromRekurzivno(zbor, start+1, end-1);
}

int main(){
    char zbor[100];

    cin.getline(zbor, strlen(zbor));
    zbor[strlen(zbor)-1] = '\0';

    if(daliPalindrom(zbor)){
        cout<<"Yes";
    }else {
        cout << "No";
    }

    if(daliPalindromRekurzivno(zbor, 0, strlen(zbor)-1)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}