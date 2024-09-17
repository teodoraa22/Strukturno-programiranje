//
// Created by Teodora on 11/19/2023.
//

#include<iostream>
using namespace std;

int main(){
    int a, b;
    int count=0;
    cin>>a>>b;
    for (int i = a+1; i <= b ; ++i) {
        if(i%2==0 && i%7==0){
            cout<<i<<endl;
            count++;
        }else if(i%2==1 && i%3==1){
            cout<<i<<endl;
            count++;
        }
    }
    if(count==0)
        cout<<0;
    else{
        float procent=(count/(b-a))*100.0;
        cout<<procent<<"%"<<endl;
    }
    return 0;
}
