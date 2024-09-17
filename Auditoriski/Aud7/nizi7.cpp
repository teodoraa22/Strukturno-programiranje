//
// Created by Teodora on 1/5/2024.
//
#include<iostream>
using namespace std;

int main(){
    int niza[100];
    int size;

    cin>>size;
    for (int i = 0; i < size; ++i) {

        for (int j = i + 1; j < size; ++j) {
            if(niza[i] == niza[j]){         //sme nasle duplikat

                for (int k = j; k < size - 1; ++k) {
                    niza[k] = niza[k+1];
                }

                --j;
                --size;
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        cout<<niza[i]<<" ";
    }
    return 0;
}
