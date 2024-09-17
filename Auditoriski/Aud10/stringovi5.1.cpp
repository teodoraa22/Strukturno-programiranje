//
// Created by Teodora on 06.2.2024.
//
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int isPalindrom(char *recenica, int start, int end) {
    if(start >= end)
        return 1;
    if(recenica[start] != recenica[end])
        return 0;
    return isPalindrom(recenica, start+1, end-1);
}

void clean(char *recenica){
    char temp[100];
    int j = 0;
    for (int i = 0; i < strlen(recenica); ++i) {
        if(isalpha(recenica[i])){
            temp[j++] = tolower(recenica[i]);
        }
    }

    temp[j] = '\0';
    strcpy(recenica, temp);
}

int main(){
    char recenica[100];

    cin.getline(recenica, strlen(recenica));

    clean(recenica);
    cout<<isPalindrom(recenica, 0, strlen(recenica)-1);
    return 0;
}