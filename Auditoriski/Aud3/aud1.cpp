//
// Created by Teodora on 10/29/2023.
/*Од тастатура се внесуваат координати на една точка од рамнина.
  Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.*/

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x>0 && y>0)
    {
        cout << "Vnesenite tocki pripagjaat na I kvadrant \n";
    }
    else if(x<0 && y>0)
    {
        cout << "Vnesenite tocki pripagjaat na II kvadrant \n";
    }
    else if(x<0 && y<0)
    {
        cout << "Vnesenite tocki pripagjaat na III kvadrant \n";
    }
    else
    {
        cout << "Vnesenite tocki pripagjaat na IV kvadrant \n";
    }
    return 0;
}
