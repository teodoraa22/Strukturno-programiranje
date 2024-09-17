//
// Created by Teodora on 12/3/2023.
//
#include<iostream>
using namespace std;

int main(){
    int niza[100];
    int size;

    cin>>size;
    for (int i = 0; i < size; ++i) {
        cin>>niza[i];
    }

//    for (int i = 0; i < size - 1; ++i) {
//        cout<<niza[i]<<" "<<niza[i+1]<<endl;
//    }

    bool rastecka = true;
    bool opagjacka = true;

    for (int i = 0; i < size - 1; ++i) {
        if(niza[i] > niza[i+1]){
            rastecka = false;
        }
        else if(niza[i] < niza[i+1]){
            opagjacka = false;
        }
        else if(niza[i] == niza[i+1]){
            rastecka = false;
            opagjacka = false;
        }
    }

    if(rastecka == true){
        cout<<"Nizata e rastecka";
    }
    else if(opagjacka == true){
        cout<<"Nizata e opagjacka";
    }
    else {
        cout<<"Nizata ne e nitu rastecka nitu opagjacka";
    }
    return 0;
}