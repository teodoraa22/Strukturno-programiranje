//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    char monkey='@';
    char percent='%';
    char dot='.';
    int m;
    cin>>m;
    for (int i = 0; i < m; ++i) {
        cout<<percent;
        int n=m-2;
        for (int j = m-2; j > 0 ; --j) {
            if(i==0 || i==m-1){
                while(n>0){
                    cout<<monkey;
                    n--;
                }
            }else{
                while(j>0){
                    cout<<dot;
                    j--;
                }
            }
        }
        cout<<percent;
        cout<<endl;
    }
    return 0;
}