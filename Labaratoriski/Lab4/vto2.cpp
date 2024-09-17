//
// Created by Teodora on 11/19/2023.
//

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a, b;
    int min = INT_MAX, max = INT_MIN;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        int tmp = i;
        int reverse = 0;

        while (tmp > 0) {
            int c = tmp % 10;
            reverse = reverse * 10 + c;
            tmp /= 10;
        }

        if (i == reverse) {
            if (i < min)
                min = i;
            if (i > max)
                max = i;
        }
    }

    cout << min << endl;
    cout << max << endl;
    return 0;
}