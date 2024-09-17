//
// Created by Teodora on 11/19/2023.

#include<iostream>
using namespace std;

int main(){
    int prev, curr;
    int position;
    int max_Suma;
    int max_Position;
    cin>>prev>>curr;
    if(prev<0 && curr<0){
        return 0;
    }
    position=2;
    max_Suma=prev+curr;
    max_Position=position;

    for(position=3; prev>0 || curr>0; position++){
        prev=curr;
        cin>>curr;

        int sum=prev+curr;
        if(sum>max_Suma){
            max_Suma=sum;
            max_Position=position;
        }
    }

    cout<<max_Suma<<" "<<max_Position;
    return 0;
}
