#include <iostream>
using namespace std;

int cifra(int broj){
    int cifra;
    while(broj){
        cifra = broj % 10;
        if(cifra % 2 == 0){
            broj /= 10;
        }else{
            return 0;
        }
    }
    return cifra;
}

int main(){
    int flag = 0; //kje bide 1 ako x moze da se pretstavi kako suma od dva broja
    int x;
    cin>>x;

    for (int i = 0; i < x; ++i) {     // i = prv broj
        for (int j = i; j < x; ++j) { // j = vtor broj
              if(cifra(i) && cifra(j)){
                  int suma = i + j;
                  if(suma == x){
                      flag = 1;
                      cout<<x<<" = "<<i<<" + "<<j<<endl;
                  }
              }
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}