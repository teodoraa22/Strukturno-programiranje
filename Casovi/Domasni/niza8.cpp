#include<iostream>
using namespace std;

int main(){
    int niza1[100];
    int niza2[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>niza2[i];
    }

    int max = niza1[0];
    int prvaCifra, poslednaCifra;
    for (int i = 0; i < n; ++i) {
        prvaCifra = niza1[i];

        while(prvaCifra >= 10){
            prvaCifra /= 10;
        }

        poslednaCifra = niza1[i] % 10;

        if(prvaCifra == poslednaCifra){
            if(max < niza1[i]){
                max = niza1[i];
            }
        }
    }

    int firstDigit, lastDigit;
    for (int i = 0; i < n; ++i) {
        firstDigit = niza2[i];

        while(firstDigit >= 10){
            firstDigit /= 10;
        }

        lastDigit = niza2[i] % 10;

        if(firstDigit != lastDigit){
            niza2[i] = max;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout<<niza2[i]<<" ";
    }
    return 0;
}