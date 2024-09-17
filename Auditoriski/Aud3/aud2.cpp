//
// Created by Teodora on 10/29/2023.
//Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка

#include<iostream>
using namespace std;

int main(){
    int p;
    cin >> p;

    if(p<0)
    {
        cout << "Vnesi pozitiven broj!" <<endl;
        return 0;
    }
    if(p<=50)
    {
        cout << "5 \n";
    }
    else if(p<=60)
    {
        cout << "6 \n";
    }
    else if(p<=70)
    {
        cout << "7 \n";
    }
    else if(p<=80)
    {
        cout << "8 \n";
    }
    else if(p<=90)
    {
        cout << "9 \n";
    }
    else
    {
        cout << "10 \n";
    }
    return 0;
}