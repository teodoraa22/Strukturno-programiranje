//
// Created by Teodora on 10/24/2023.
//

#include<iostream>
using namespace std;

int main(){
    int a,b,c,t;
    cin >> a >> b >> c;
    t = (a * 100) + (b * 10) + c;
    a = t - a;
    b = t - b;
    c = t - c;
    cout << t << endl;
    cout << a << " " << b << " " << c << endl;
    return 0;
}