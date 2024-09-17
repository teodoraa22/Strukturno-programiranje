//
// Created by Davor on 11/11/2023.
//

#include<iostream>
using namespace std;
int main(){
    int b0, b1, b2;
    b0=b1=b2=0;
    int n, broj, i=0;
    cin>>n;
    do{
        cin>>broj;
        if(broj%3==0) {
            b0++;
        }
        else if(broj%3==1) {
            b1++;
        }
        else if(broj%3==2) {
            b2++;
        }
        i++;
    }while(i<n);
    cout<<b0<<endl;
    cout<<b1<<endl;
    cout<<b2<<endl;
    return 0;
}