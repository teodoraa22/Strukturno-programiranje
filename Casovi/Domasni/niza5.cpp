#include<iostream>
using namespace std;

int rastecka(int niza[], int n){
    for (int i = 1; i < n; ++i) {
        if(niza[i] <= niza[i-1]){
            return -1; //ako najde barem eden element pomal/ednakov od prethodniot kje vrati -1
        }
    }
    return 1; //ako ne najde nitu eden element koj e pomal/ednakov od prethodniot kje vrati 1
}

/*
    0 1 2  3  4
    8 9 10 6  20
    9<=8 ne, prodolzuva so proverka
    10<=9 ne, prodolzuva
    6<=10 da, funkcijata vrakja -1 i nizata e opagjacka
*/

int main(){
    int niza[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    cout<<rastecka(niza, n);
    return 0;
}