//
// Created by Teodora on 1/4/2024.
//
/*
 * Од тастатура се вчитува цел број N. Да се испечатат на екран сите парови на броеви(помали од N, поголеми од 0) за коишто важи:
 * Нивната сума е еднаква на N
 * Обратниот број на првиот број од парот е делив со сумата на цифрите на вториот број од парот.
 * Паровите да се отпечатат сортирани по растечки редослед според првиот број во парот.
 * Влез: 50
 * Излез: 7 43(Обратен број на 7 е 7, сума на цифрите на 43 е 7, 7 е делив со 7 и сумата на 7+43=50)
 *        40 10
 *        42 8
 *        46 4
 *        48 2
 *        49 1
 * */
#include<iostream>
using namespace std;

int obratenBroj(int broj) {
    int obraten = 0;
    while (broj){
        obraten = obraten * 10 + broj % 10;
        broj /= 10;
    }
    return obraten;
}

int sumaNaCifri(int broj) {
    int suma = 0;
    while(broj){
        suma += broj % 10;
        broj /= 10;
    }
    return suma;
}

int main(){
    int n;
    cin>>n;
    int count = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i+j == n){
                if(obratenBroj(i) % sumaNaCifri(j) == 0){
                    cout<<i<<" "<<j<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"Count:"<<count;
    return 0;
}
