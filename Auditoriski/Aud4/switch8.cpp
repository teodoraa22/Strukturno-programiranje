//
// Created by Teodora on 11/5/2023.
/* Напишете програма која од стандарден влез ќе ги прочита координатите на долното лево теме
 на правоаголникот px, py, должините на неговите страни a и b и координатите tx и ty на произволна точка
 од рамнината, и на стандарден излез (екран) ќе отпечати:
 "strana" - доколку точката (tx, ty) лежи на некоја од страните на правоаголникот,
 или на едно од неговите темиња
 "vnatre" - доколку точката (tx, ty) е внатре во правоаголникот
 "nadvor" - доколку точката (tx, ty) е надвор од правоаголникот */

#include<iostream>
using namespace std;

int main(){
    int px, py, a, b, tx, ty;
    cin>>px>>py>>a>>b;
    cin>>tx>>ty;
    if(tx==px && ty==py || tx==a && ty==b){
        cout<<"strana"<<endl;
    }
    else if(tx<px && ty<py || tx<a && ty<b){
        cout<<"vnatre"<<endl;
    }
    else if(tx!=px && ty!=py || tx!=a && ty!=b)
        cout<<"nadvor"<<endl;
    return 0;
}
