#include<iostream>
using namespace std;

int main(){
    int niza1[100];
    int niza2[100];
    int niza3[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>niza2[i];
    }

//    for (int i = 0; i < n; ++i) {
//        if(i % 2 == 1) {
//            for (int j = 0; j < n; ++j) {
//                if (j % 2 == 0) {
//                    niza3[i] = niza1[j];
//                    i += 2;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        if(i % 2 == 0){
//            for (int j = 0; j < n; ++j) {
//                if(j % 2 == 1){
//                    niza3[i] = niza2[j];
//                    i += 2;
//                }
//            }
//        }
//    }


//    for (int i = 0; i < n; ++i) {
//        //проверувам дали i-тата позиција е непарна
//        if(i % 2 == 1){
//            //ако е непарна во низа 3 ги додавам елементите од низа 1 на парна позиција т.е. ако i = 1, niza1[0]; i = 3, niza1[2]
//            niza3[i] = niza1[i - 1];
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        //проверувам дали i-тата позиција е парна
//        if(i % 2 == 0){
//            //ако е парна во низа 3 ги додавам елементите од низа 2 на непарна позиција т.е. ако i = 0, niza2[1]; i = 2, niza2[3]
//            niza3[i] = niza2[i + 1];
//        }
//    }

    for (int i = 1; i < n; i+=2) {
        niza3[i] = niza1[i - 1];
    }

    for (int i = 0; i < n; i+=2) {
        niza3[i] = niza2[i + 1];
    }

    for (int i = 0; i < n; ++i) {
        cout<<niza3[i]<<" ";
    }
    return 0;
}