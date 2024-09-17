//
// Created by Teodora on 11/12/2023.
//
#include <iostream>
using namespace std;

int main() {
    int x, broj;
    int countx=0, countbroj=0;
    cin>>x;
    while(x>0){
        countx++;
        x/=10;
    }
    while(cin>>broj){
        int tmp=broj;
        countbroj=0;
        while(tmp){
            countbroj++;
            tmp/=10;
        }
        if(countbroj==countx){
            cout<<broj<<endl;
        }
    }
    return 0;
}

