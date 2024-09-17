//
// Created by Teodora on 1/7/2024.
//
#include<iostream>
using namespace std;

int linearSearch (int niza[], int size, int element)
{
    for (int i = 0; i < size; ++i) {
        if(niza[i] == element){
            return i;
        }
    }

    return -1;
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

int binarySearch (int niza[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    while(start < end){
        int middle = (start + end) / 2;
        if(niza[middle] == element){
            return middle;
        }else if(element > niza[middle]){
            start = middle;
        }else{
            end = middle;
        }
    }

    return -1;
}

int main(){
    int niza[100];
    int size;
    int element;

    cin>>size;
    for (int i = 0; i < size; ++i) {
        cin>>niza[i];
    }

    cin>>element; // koj element go baram vo nizata

    cout<<linearSearch(niza, size, element);

    cout<<binarySearch(niza, size, element);

    bubbleSort(niza, size);
    return 0;
}