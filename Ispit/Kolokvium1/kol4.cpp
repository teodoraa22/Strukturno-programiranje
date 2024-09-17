//
// Created by Teodora on 11/12/2023.
//
#include<iostream>
using namespace std;
int main() {
    int n;
    int najgolem_Zbir=0;
    int broj=0;
    cin>>n;
    for(int i=1; i<n; i++){
        int deliteli=0;
        for(int j=1; j<i; j++){
            if(i%j==0){
                deliteli+=j;
            }
        }
        if(deliteli>najgolem_Zbir){
            najgolem_Zbir=deliteli;
            broj=i;
        }
    }
    cout<<broj<<endl;
    return 0;
}