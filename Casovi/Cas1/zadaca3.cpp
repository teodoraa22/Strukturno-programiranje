//
// Created by Davor on 7/30/2024.
//
#include<iostream>
#include<cstring>
using namespace std;

void simpleSort(int a[], int n){
    for (int i = 0; i < n-1; ++i) { //kje odi do n-1 zatoa sto posledniot broj nema da ima so koj da go sporedime
        for (int j = i+1; j < n; ++j) { //i+1 go zima brojot od desno
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}

int main(){
    char line[100];

    while (cin.getline(line, 100)){
        if(!strcmp(line, "#")){
            break;
        }

        int counter = 0;
        int podNiza[100];
        for (int i = 0; i < strlen(line); ++i) {
            if(isdigit(line[i])){
                podNiza[counter++] = line[i] - '0'; //so line[i] - '0' pretvarame od karakter vo broj
            }
        }

        simpleSort(podNiza, counter);

        cout<<counter<<":";
        for (int i = 0; i < counter; ++i) {
            cout<<podNiza[i];
        }
        cout<<endl;
    }
    return 0;
}