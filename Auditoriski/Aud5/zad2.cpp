//
// Created by Davor on 11/11/2023.
//

#include<iostream>
using namespace std;
int main(){
    int i = 11, suma = 0;
    cout << i;
    suma = i;
    i = i + 2;
    while(i<=99){
        cout<<"+"<<i;
        suma=suma+i;
        i+=2;
    }
    cout<<"="<<suma;
    return 0;
}
