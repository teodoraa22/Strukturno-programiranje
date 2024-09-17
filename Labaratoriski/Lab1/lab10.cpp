//
// Created by Teodora on 11/7/2023.
//
#include<iostream>
using namespace std;

int main(){
    int points = 0, p1, p2, p3, p4, p5;
    cin>>p1>>p2>>p3>>p4>>p5;
    points = p1 + p2 + p3 + p4 + p5;
    if(points<=50) cout<<"Predmetot ne e polozen";
    else if(points<=60) cout<<"Ocenka: 6, poeni: "<<points<<endl;
    else if(points<=70) cout<<"Ocenka: 7, poeni: "<<points<<endl;
    else if(points<=80) cout<<"Ocenka: 8, poeni: "<<points<<endl;
    else if(points<=90) cout<<"Ocenka: 9, poeni: "<<points<<endl;
    else if(points<=100) cout<<"Ocenka: 10, poeni: "<<points<<endl;

    if(points%10==0 && points>50 && points<=90){
        cout<<"Ima uslov za povisoka ocenka";
    }
    else
        cout<<"Nema uslov za poviska ocenka";
    return 0;
}
