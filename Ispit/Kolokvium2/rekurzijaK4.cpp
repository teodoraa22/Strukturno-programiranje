//
// Created by Teodora on 1/5/2024.
//
/*
 * Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
 * Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи,
 * кои ги има таа низа. Функцијата е зададена со следниот прототип: int BrojPozitivni(int niza[], int n);
 * Да се напише и функција main() за тестирање на функцијата BrojPozitivni.
 */
#include<iostream>
using namespace std;

int BrojPozitivni(int niza[], int n, int i = 0)
{
    if(i == n)
        return 0;
    if(niza[i] > 0)
        return 1 + BrojPozitivni(niza, n, i + 1);
    return BrojPozitivni(niza, n, i + 1);
}

int main(){
    int niza[100];
    int n, i;

    cin>>n;
    for (i = 0; i < n; ++i) {
        cin>>niza[i];
    }
    cout<<BrojPozitivni(niza, n);
    return 0;
}