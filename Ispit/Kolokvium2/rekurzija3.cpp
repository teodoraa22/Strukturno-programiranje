//
// Created by Teodora on 1/4/2024.
//
/*
 * Да се напише програма која за дадена низа од цели броеви (која се внесува од тастатура), ќе го отпечати најмалиот
 * заеднички содржател (НЗС) на нејзините елементи. Програмата треба задолжително да содржи рекурзивна функција за пресметување
 * НЗС на два броја. Пример: За низата 18 12 24 36 6 на екран треба да се отпечати:72
 */
#include<iostream>
using namespace std;

int NZD(int m, int n) {
    int ostatok = m % n;
    if(ostatok == 0)
        return n;
    return NZD(n, ostatok);
}

int NZS(int m, int n)
{
    if(NZD(m,n) == 0)
        return 0;
    return m / NZD(m,n) * n;
}

int main(){
    int niza[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    int nzs = NZS(niza[0], niza[1]);
    for (int i = 2; i < n; ++i) {
        nzs = NZS(nzs, niza[i]);
    }

    cout<<nzs;
    return 0;
}