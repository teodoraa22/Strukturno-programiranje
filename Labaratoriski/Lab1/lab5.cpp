//
// Created by Teodora on 10/24/2023.
//

#include<iostream>
using namespace std;

int main(){
    int a, b;
    int c, d, e, f;
    cin >> a >> b;
    c = a % 10;
    d = a / 100;
    e = b % 10;
    f = (b / 100) % 10;
    float as = (c+d+e+f) / 4.0;
    cout << as;
    return 0;
}