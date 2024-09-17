//
// Created by Teodora on 10/13/2023.
/*Програма за пресметување и печатење на плоштината и периметарот на круг
  Радиусот на кругот се чита од стандарден влез  како децимален број */

#include<iostream>
using namespace std;

int main() {
    double r, L, P;
    cout << "Vnesi radius na krug: ";
    cin >> r;
    L = 2 * r * 3.14;
    P = r * r * 3.14;
    cout << "Perimetarot na krug so radius " << r << " e: " << L << endl;
    cout << "Plostinata na krug so radius " << r << " e: " << P << endl;
    return 0;
}