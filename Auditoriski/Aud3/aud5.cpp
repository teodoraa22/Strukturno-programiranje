//
// Created by Teodora on 10/29/2023.
/*Од тастатура се внесуваат должини на три отсечки во произволен редослед.
  Дали од дадените отсечки може да се конструра триаголник.Ако може, да се испечати
  дали триаголникот е разностран, рамностран или рамнокрак и да му се пресмета плоштината.*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b <= c) || (a+c <= b) || (b+c <= a)){
        cout << "Ne moze da se konstrura triagolnik! \n";
        return 0;
    }
    if(a>=b){
        float tmp = a;
        a = b;
        b = tmp;
    }
    if(a>=c){
        float tmp = a;
        a = c;
        c = tmp;
    }
    if(b>=c){
        float tmp = b;
        b = c;
        c = tmp;
    }
    if(a==b && b==c){
        cout << "Triagolnikot e ramnostran. \n";
    }
    else if(a==b || a==c || b==c){
        cout << "Triagolnikot e ramnokrak. \n";
    }
    else{
        cout << "Triagolnikot e raznostran. \n";
    }
    float p, s;
    s = (a+b+c) / 2.0;
    p = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Plostinata mu e: " << p;
    return 0;
}


