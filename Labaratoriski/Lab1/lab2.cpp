//
// Created by Teodora on 10/24/2023.
//

#include<iostream>
using namespace std;

int main(){
    int d,m,g;
    cin >> d;
    g = d / 365;
    d = d % 365;
    m = d / 30;
    d = d % 30;
    cout << "Years: " << g << ", months: " << m << ", days: " << d << endl;
    return 0;
}