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

        if (x < 10) continue;
        if (x >= 10 && x <= 99) {
            if (a != b) {
                cout << x << endl;
            }
        }

        int tmp = x;
        bool flag = false;
        while (x > 99) {
            flag = false;
            if (!(a > b && c > b) || (a < b && c < b)) {
                break;
            } else {
                x /= 10;
                flag = true;
            }
        }

        if(flag)
            cout<<tmp<<endl;
    }
        return 0;
    }
