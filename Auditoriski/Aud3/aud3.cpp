//
// Created by Teodora on 10/29/2023.
//Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка
//покрај оценките ќе се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените

#include<iostream>
using namespace std;

int main(){
    int poeni, ocena=0;
    cin>>poeni;
    if(poeni<0 || poeni>100){
        cout<<"Vneseni se nevalidni poeni! \n";
        return 0;
    }
    if(poeni>=0 && poeni<=50) ocena=5;
    else if(poeni>=51 && poeni<=60) ocena=6;
    else if(poeni>=61 && poeni<=70) ocena=7;
    else if(poeni>=71 && poeni<=80) ocena=8;
    else if(poeni>=81 && poeni<=90) ocena=9;
    else if(poeni>=91 && poeni<=100) ocena=10;
    int pc=poeni%10;
    char znak=' ';
    if(ocena!=5 && ocena!=10) {
        if (pc >= 1 && pc <= 3)
            znak = '-';
        else if (pc >= 8 || pc == 0)
            znak = '+';
    }
    cout<<"Ocena: "<<ocena<<znak;
    return 0;
}
