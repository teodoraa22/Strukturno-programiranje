//
// Created by Teodora on 11/4/2023.
//
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Vnesi tri otsecki:"<<endl;
    cin>>a>>b>>c;
    if((a+b)<=c || (a+c)<=b || (c+b)<=a){
        cout<<"Ne moze da se konstruira triagolnik!"<<endl;
        return 0;
    }
    if(c*c==a*a+b*b || a*a==c*c+b*b || b*b==a*a+c*c){
        cout<<"Triagolnikot e pravoagolen!"<<endl;
    }
    else if(c*c<a*a+b*b || a*a<c*c+b*b || b*b<a*a+c*c){
        cout<<"Triagolnikot e ostroagolen!"<<endl;
    }
    else
        cout<<"Triagolnikot e tapoagolen!"<<endl;
    return 0;
}
