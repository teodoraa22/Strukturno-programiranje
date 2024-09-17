//
// Created by Teodora on 10/29/2023.
/*Од тастатура се внесуваат должини на три отсечки во произволен редослед.
  Ќе провери дали од отсечките може да се конструира триаголник, при што ако може, да се провери дали
  истиот е правоаголен и да се пресмета неговата плоштина.*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)<=c || (a+c)<=b || (b+c)<=a){
        cout<<"Ne moze da se konstruira triagolnik \n";
        return 0;
    }
    if(a>c){
        float tmp=c;
        c=a;
        a=tmp;
    }
    if(a>b){
        float tmp=b;
        b=a;
        a=tmp;
    }
    if(b>c){
        float tmp=c;
        c=b;
        b=tmp;
    }
    if(c*c == a*a+b*b){
        cout<<"Triagolnikot e pravoagolen \n";
        cout<<"Plostina: "<<a*b/2;
    }
    else
        cout<<"Triagolnikot ne e pravoagolen \n";
    return 0;
}
