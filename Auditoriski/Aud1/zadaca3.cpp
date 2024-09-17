//
// Created by Teodora on 10/13/2023.
/* Програма која за дадени страни на еден разностран триаголник
   ќе ги отпечати на екран периметарот и квадратот од плоштината */

#include<iostream>
using namespace std;

int main() {
    float a = 5, b = 7.5, c=10.2;
    float L = a + b + c;
    float s = L / 2;
    float P = s * (s - a) * (s - b) * (s - c);
    cout << "Perimetarot na raznostran triagolnik e: " << L << endl;
    cout << "Kvadratot na plostinata na raznostran triagolnik e: " << P << endl;
    return 0;
}
