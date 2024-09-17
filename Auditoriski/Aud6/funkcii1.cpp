//
// Created by Teodora on 11/27/2023.
//

#include<iostream>
#include<cmath>
using namespace std;

float dijametar(float r) {
    return 2 * r;
}

float perimetar(float r) {
    return dijametar(r) * M_PI;
}

float plostina(float r) {
    return pow(r,2) * M_PI;
}

int main(){
    float r;
    cin>>r;
    cout<<dijametar(r)<<endl;
    cout<<perimetar(r)<<endl;
    cout<<plostina(r)<<endl;
    return 0;
}