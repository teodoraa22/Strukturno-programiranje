//
// Created by Davor on 11/12/2023.
//
#include<iostream>
using namespace std;
int main(){
    int n, broj, tmp, min=-1;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin >> broj;
        tmp = broj;
        while (tmp > 9) {
            int lc = tmp % 10;
            int fc = (tmp / 10) % 10;
            if (lc >= fc) break;
            tmp /= 10;
        }
        if (tmp < 10) {
            cout << broj << endl;
            if(min == -1)
                min=broj;
            else if(broj<min)
                min=broj;
        }
    }
    cout<<min<<endl;
    return 0;
}
