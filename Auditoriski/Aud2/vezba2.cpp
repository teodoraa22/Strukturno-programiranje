//
// Created by Teodora on 10/19/2023.
//Програма која ќе чита два цели броеви од тастатура и на екран ќе го испечати резултатот z = x++ + --y + (x<y)

#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout << "Vnesi dva celi broevi: " << endl;
    cin >> x >> y;
    z = x++ + --y + (x<y);
    cout << z;
    return 0;
}