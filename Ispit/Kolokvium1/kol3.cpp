//
// Created by Teodora on 11/12/2023.
//
#include<iostream>
using namespace std;
int main(){
    int m, n;
    int i;
    bool sostojba;
    cin>>m>>n;
    for(i=m; i<=n; i++){
        int broj=i;
        sostojba=1;
        while(broj){
            int ld=broj%10;
            if(ld%2==1){
                sostojba=0;
                break;
            }
            broj/=10;
        }
        if(sostojba==1){
            break;
        }
    }
    if(sostojba==1){
        cout<<i<<endl;
    }else{
        cout<<"NE"<<endl;
    }
    return 0;
}
