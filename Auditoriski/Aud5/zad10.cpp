//
// Created by Davor on 11/11/2023.
//
#include<iostream>
using namespace std;
int main(){
    int n, broj;
    int razlika=0;
    int sumaP=0, sumaN=0;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>broj;
        if(i%2==0){
            sumaP = sumaP + broj;
        }
        else{
            sumaN = sumaN + broj;
        }
    }
    razlika=sumaP-sumaN;
    if(razlika<10){
        cout<<"Dvete sumi se slicni";
    }
    else{
        cout<<"Dvete sumi mnogu se razlikuvaat";
    }
    return 0;
}