//
// Created by Teodora on 10/24/2023.
//

#include<iostream>
using namespace std;

int main(){
    int a,b,s,r;
    cout << "Vnesi dva celi broevi: \n";
    cin >> a >> b;
    s = (a+b)/2;
    a = a + s;
    b = b - s;
    r = a - b;
    cout << "Razlikata megju broevite e: " << r << endl;
    return 0;
}
