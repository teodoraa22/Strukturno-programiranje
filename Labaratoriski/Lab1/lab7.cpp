//
// Created by Teodora on 11/7/2023.
//
#include<iostream>
using namespace std;

int main(){
    int credit, year;
    double prosek, points=0;
    cin>>credit>>year>>prosek;
    if(credit > 100 && prosek > 8.0){
        double Pcredit = (2023 - year) * 60;
        points = credit / Pcredit * 10 + (prosek - 8.5) * 6.5;
        if(credit > 240){
            cout<<"Need to graduate! ";
        }
        else if(prosek > 9.0){
            cout<<"Great student! ";
        }
    }
    cout<<"Points: "<<points;
    return 0;
}