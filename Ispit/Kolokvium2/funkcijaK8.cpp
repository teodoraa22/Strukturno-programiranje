//
// Created by Teodora on 1/5/2024.
//
/*
 * Да се дефинираат функциите:
 * divisibleByK (int number, int k) - која ќе враќа 1 доколку бројот k е делител на бројот number, a 0 во спротивно
 * nextDivisibleByK (int number, int k) - која ќе го врати првиот број поголем од number кој е делив со k.
 * Да се употреби повик до divisibleByK во ова функција.Да не се менува main функцијата!
 * Објаснување на примерот: Во секоја линија лево од стрелката се печати секој број од интервалот од [10,20],
 * а десно од стрелката се печати наредниот број поголем од бројот лево којшто е делив со бројот k.
 * Бонус: Направете ја функцијата nextDivisibleByK рекурзивна.
 */
#include<iostream>
using namespace std;

int divisibleByK (int number, int k)
{
    if(number % k == 0)
        return 1;
    return 0;
}

int nextDivisibleByK (int number, int k)
{
    if(divisibleByK(number + 1, k))
        return number + 1;
    return nextDivisibleByK(number + 1, k);
}

int main(){
    int a, b, k;
    cin>>a>>b>>k;

    for (int i = a; i <= b ; ++i) {
        cout<<i<<" -> "<<nextDivisibleByK(i,k)<<endl;
    }
    return 0;
}