#include <iostream>
using namespace std;

int tretaCifra(int broj){
    int cifra;
    while(broj >= 100){ //1234>=100 da; 123 >= 100 da; 12>=100 ne
        cifra = broj % 10; //4; 3
        broj /= 10; //123; 12
    }
    return cifra; //ja vrakja trojkata
}

int main() {
    int prva[100];
    int vtora[100];
    int n;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>prva[i];
    }

    int index = 0;

    for (int i = 0; i < n; ++i) {
        if(prva[i] < 100){
            continue;
        }else if(tretaCifra(prva[i]) > 4){
            vtora[index++] = prva[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if(prva[i] < 100){
            continue;
        }else if(tretaCifra(prva[i]) <= 4){
            vtora[index++] = prva[i];
        }
    }

    for (int i = 0; i < index; ++i) {
        cout<<vtora[i]<<" ";
    }
    cout<<endl;
    return 0;
}