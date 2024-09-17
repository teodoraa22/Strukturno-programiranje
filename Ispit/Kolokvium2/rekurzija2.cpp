//
// Created by Teodora on 1/4/2024.
//
/*
 * Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$
 * ќе ја пресмета вредноста на непрекинатата дропка дефинирана како: v=a0 + 1/a1 +... +1/an−2 + 1/an−1
 * Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви
 * Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.
 */
#include<iostream>
using namespace std;

double dropka(int a[], int n, int i = 0) {
    if (i == n - 1)
        return a[i];
    return a[i] + 1.0 / dropka(a, n, i + 1);
}

int main(){
    int n;
    int a[100];

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    cout<<dropka(a, n);
    return 0;
}

