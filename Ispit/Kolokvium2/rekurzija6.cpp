//
// Created by Teodora on 15.1.2024.
//
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int poramnet(int a)
{
    if(a == 0)
        return 0;
    if(a%10 == 9)
        return 7 + poramnet(a/10) * 10;
    return a%10 + poramnet(a/10) * 10;
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}


int main(){

    int n=0,i,niza[100],broj;
    while(cin>>broj){
        niza[n] = poramnet(broj);
        n++;

    }

    bubbleSort (niza,n);

    if (n>5){
        n = 5;
    }

    for (i=0;i<n;i++){
        cout<<niza[i]<<" ";
    }

    return 0;
}