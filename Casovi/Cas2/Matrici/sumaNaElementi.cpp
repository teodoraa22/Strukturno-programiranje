#include <iostream>
using namespace std;

//Ako elementot koi se naogja na glavna dijagonala ima ista vrednost so zbirot na elemnti od negovata desnata strana
//da se ispecati matricata, ako ne -1

int main(){
    int n, m;
    cin>>n>>m;
    int matrica[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>matrica[i][j];
        }
    }

    int flag = 1;
    for (int i = 0; i < n-1; ++i) { //posledniot element ne se proveruva zatoa sto nema elementi desno od nego
        for (int j = 0; j < m; ++j) {
            if(i == j){
                int suma = 0;
                for (int k = i+1; k < m; ++k) {
                    suma += matrica[j][k];
                }

                if(suma != matrica[i][j]){
                    flag = 0;
                }
            }
        }
    }

    if(flag){
        cout<<"1"<<endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout<<matrica[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"-1"<<endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout<<matrica[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

//#include <iostream>
//using namespace std;
//
//int main(){
//    int n;
//    cin>>n;
//    int matrica[n][n];
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin>>matrica[i][j];
//        }
//    }
//
//    int flag = 1;
//    for (int i = 0; i < n-1; ++i) { //posledniot element ne se proveruva zatoa sto nema elementi desno od nego
//        for (int j = 0; j < n; ++j) {
//            if(i == j){
//                int suma = 0;
//                for (int k = i+1; k < n; ++k) {
//                    suma += matrica[j][k];
//                }
//
//                if(suma != matrica[i][j]){
//                    flag = 0;
//                }
//            }
//        }
//    }
//
//    if(flag){
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j) {
//                cout<<matrica[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//    }else{
//        cout<<"-1"<<endl;
//    }
//    return 0;
//}