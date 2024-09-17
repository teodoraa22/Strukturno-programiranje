//
// Created by Teodora on 1/4/2024.
//
/*
 * Да се напише функција која ќе го најде бројот на позитивни броеви од целобројна низа.
 * Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи,
 * кои ги има таа низа. Функцијата е зададена со следниот прототип: int BrojPozitivni(int niza[], int n);
 * Да се напише и функција main() за тестирање на функцијата BrojPozitivni.
 */
#include<iostream>
using namespace std;

int BrojPozitivni(int niza[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if(niza[i] > 0){
            count++;
        }
    }
    return count;
}

int main(){
    int niza[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    cout<<BrojPozitivni(niza, n);
    return 0;
}