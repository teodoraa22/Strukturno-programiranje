//
// Created by Teodora on 11/27/2023.
//

#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int calculateD(int a, int b, int c) {
    return abs(a - b) + abs(b - c);
}

int main() {
    int n;
    cin >> n;
    int minD = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int currentD = calculateD(a, b, c);
        minD = min(minD, currentD);
    }
    cout << minD << endl;

    return 0;
}