//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    int najgolemZbir=0;
    int broj;
    cin>>n;
    for(int i = 1; i < n; i++){
        int deliteli=0;
        for (int j = 1; j < i; ++j) {
            if(i%j==0)
                deliteli+=j;
        }
        if(deliteli>najgolemZbir) {
            najgolemZbir = deliteli;
            broj=i;
        }
    }
    cout<<broj;
    return 0;
}
