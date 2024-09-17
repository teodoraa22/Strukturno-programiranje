//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;
    int i=n-1;
    while(true){
        bool najden=true;
        int tmpn=i;
        while(tmpn>0){
            int cn=tmpn%10;
            int tmpx=x;
            while(tmpx>0){
                int cx=tmpx%10;
                if(cn==cx){
                    najden=false;
                    break;
                }
                tmpx/=10;
            }
            tmpn/=10;
        }
        if(najden) break;
        i--;
    }
    cout<<i;
    return 0;
}
