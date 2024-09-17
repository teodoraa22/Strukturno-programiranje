//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    int x;
    while(cin>>x) {

        int a = x % 10;
        int b = (x / 10) % 10;
        int c = (x / 100) % 10;

        int tmp = x;
        bool flag = false;

        if (x < 10) continue;
        else if (x >= 10 && x <= 99) {
            if ((a >= 5 && b < 5) || (a < 5 && b >= 5)){
                cout << x << endl;
            }
        }
        else {
            while (x > 99) {
                flag = false;
                if (!(a >= 5 && b < 5 && c >= 5) || (a < 5 && b >= 5 && c < 5)) {
                    break;
                } else {
                    x /= 10;
                    flag = true;
                }
            }
        }
        if(flag)
            cout<<tmp<<endl;
    }
    return 0;
}