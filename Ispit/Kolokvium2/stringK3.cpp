//
// Created by Teodora on 10.2.2024.
//
//Vnesi broj n. Potoa da se pecati niza
//n, n-3, n-6, n-9... n-9, n-6, n-3
//Koga ke dojde do negativen broj da ne se odzima do 3 tuku da se soberi so 3 vo sekoj nareden clen

#include<iostream>
using namespace std;

void odzemi(int n, int r) {
    if (n<0) {
        return ;
    }
    cout << n << " ";
    odzemi(n - r, r);
    if (n > 0) {
        cout << n << " ";
    }
}

int main(){
    int r=3;
    int n;
    cin>>n;

    odzemi(n, r);
    return 0;
}