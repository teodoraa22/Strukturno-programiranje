//
// Created by Davor on 11/11/2023.
//
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a; i<b; i++){
        int tmp=i;
        int reverse=0;
        while(tmp>0){
            int c=tmp%10;
            reverse=reverse*10+c;
            tmp/=10;
        }
        if(reverse==i){
            cout<<i<<endl;
        }
    }
    return 0;
}
