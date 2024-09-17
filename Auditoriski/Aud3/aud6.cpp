//
// Created by Teodora on 10/29/2023.
/*Да се напише програма за пресметување на возраста на едно куче во човечки години.
  Кучешката возраст се чита од стандарден влез.*/

#include<iostream>
using namespace std;

int main(){
    float kv, cv;
    cin >> kv;
    if(kv<0){
        cout << "Vozrasta mora da bide pozitiven broj. \n";
        return 0;
    }
    if(kv<=2){
        cv = kv * 10.5;
    }
    else {
        cv = 2 * 10.5 + (kv-2) * 4;
    }
    cout << "Vozrasta na edno kuce vo covecki godini e: " << cv;
    return 0;
}
