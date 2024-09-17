//
// Created by Teodora on 1/4/2024.
//
/*
 * Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.
 * Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата.
 * Доколку нема таков елемент, функцијата враќа вредност 0. Напишете програма што ќе ја повика функцијата par за внесената низа a[ ]
 * и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].
 * Пример 1: Влез
 *           12 // бројот N на елементи
 *           1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата
 *           Излез
 *           Najmaliot element koj se pojavuva paren broj pati e 1 //функцијата par враќа вредност 1
 * Пример 2: Влез
 *           9 // бројот N на елементи
 *           1 2 3 4 5 6 7 8 9 // елементи на низата
 *           Излез
 *           Nitu eden element ne se pojavuva paren broj pati! //функцијата par враќа вредност 0
 */
#include<iostream>
#include<climits>
using namespace std;

bool appearsOdd(int a[], int n, int element)
{
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i] == element){
            count++;
        }
    }
    if(count % 2 == 0){
        return 1;
    }
    return 0;
}

int par(int a[], int n){
    int min = INT_MAX;
    int found = 0;
    for (int i = 0; i < n; ++i) {
        if(appearsOdd(a, n, a[i]) && a[i] < min){
            min = a[i];
            found = 1;
        }
    }
    if(found == 1){
        return min;
    }else{
        return 0;
    }
}

int main(){
    int a[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    if(par(a, n) == 0){
        cout<<"Nitu eden element ne se pojavuva paren broj pati!"<<endl;
    }else{
        cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<par(a, n)<<endl;
    }
    return 0;
}