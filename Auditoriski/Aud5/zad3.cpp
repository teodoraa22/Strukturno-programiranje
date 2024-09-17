//
// Created by Davor on 11/11/2023.
//

#include<iostream>
using namespace std;
int main(){
    int x, n;
    int y=1;
    cin>>x>>n;
    for(int i=0; i<n; i++){
        y*=x;
    }
    cout<<x<<"^"<<n<<"="<<y;
    return 0;
}
