//
// Created by Teodora on 11/27/2023.
//
/*
 * Да се пресмета збирот: 1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!
 * НАПОМЕНА: Користете функција за пресметување на збирот на првите k природни броеви.
 * Користете функција за пресметување факториел на еден природен број k.
 */
#include <iostream>

using namespace std;

int zbirNaPrviteKBroevi(int k) {
    int zbir = 0;
    for (int i = 1; i <= k; ++i) {
        zbir += i;
    }
    return zbir;
}

int faktorial(int k) {
    int proizvod = 1;
    for (int i = 1; i <= k; ++i) {
        proizvod *= i;
    }
    return proizvod;
}

int main() {
    int k;
    cin >> k;
    int rezultat = 0;
    int s;
    for (int i = 1; i < k; ++i) {
        s = zbirNaPrviteKBroevi(i);
        rezultat += faktorial(s);
    }
    cout << rezultat << endl;
    return 0;
}