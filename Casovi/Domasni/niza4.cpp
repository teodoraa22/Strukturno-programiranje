#include <iostream>
using namespace std;

int main() {
    int niza[100];
//    int temp[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }

    int sredina = n / 2;
    int sredinaN = sredina + 1;
//
//    if (n % 2 == 0) {
//        for (int i = 0; i < sredina; i++) {
//            temp[i] = niza[sredina + i];
//        }
//        for (int i = 0; i < sredina; i++) {
//            temp[sredina + i] = niza[i];
//        }
//    }else {
//        for (int i = 0; i < sredina; i++) {
//            temp[i] = niza[sredinaN + i];
//        }
//        temp[sredina] = niza[sredina];
//        for (int i = 0; i < sredina; i++) {
//            temp[sredinaN + i] = niza[i];
//        }
//    }

    if(n % 2 == 0){
        for (int i = 0; i < sredina; ++i) {
            swap(niza[i], niza[sredina + i]);
        }
    }else {
        for (int i = 0; i < sredina; ++i) {
            swap(niza[i], niza[sredinaN + i]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << niza[i] << " ";
    }
    cout<<endl;
    return 0;
}