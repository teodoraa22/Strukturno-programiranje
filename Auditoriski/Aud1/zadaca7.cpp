//
// Created by Teodora on 10/13/2023.
/* Програма која од СВ ќе прочита два цели броеви и ќе ја испечати
   на екран нивната сума, разлика, производ и остатокот при делењето */

#include<iostream>
using namespace std;

int main() {
    int x , y;
    cout << "Vnesi dva celi broevi: ";
    cin >> x >> y;
    cout << "Sumata na broevite " << x << " i " << y << " e: " << x + y << endl;
    cout << "Razlikata na broevite " << x << " i " << y << " e: " << x - y << endl;
    cout << "Proizvodot na broevite " << x << " i " << y << " e: " << x * y << endl;
    cout << "Ostatokot pri delenje na broevite " << x << " i " << y << " e: " << x % y << endl;
    return 0;
}