//
// Created by Davor on 11/12/2023.
//

#include<iostream>
using namespace std;
int main(){
    int m,n;
    int i;
    bool min;
    cin>>m>>n;
    for(i=m; i<=n; i++){
        int broj=i;
        min=1;
        while(broj>0){
            int lc=broj%10;
            if(lc%2==1){
                min=0;
                break;
            }
            broj/=10;
        }
        if(min==1)
            break;
    }
    if(min==1){
        cout<<i;
    }else{
        cout<<"NE";
    }
    return 0;
}
