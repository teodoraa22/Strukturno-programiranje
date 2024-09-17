#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int mat1[n][m];
    int mat2[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>mat1[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>mat2[i][j];
        }
    }

    int count = 0;       //kolku koloni od mat1 se naogjaat vo mat2

//    int brElementi = 0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if(mat1[j][i] == mat2[j][i]){
//                brElementi++;
//            }
//        }
//        if(brElementi == n){
//            count++;
//        }
//        brElementi = 0;
//    }

    // Проверка на секоја колона од првата матрица
    for (int col1 = 0; col1 < n; ++col1) {
        // Проверка на секоја колона од втората матрица
        for (int col2 = 0; col2 < n; ++col2) {
            bool identical = true; // Поставуваме како идентични

            // Проверка на сите елементи на колоните
            for (int row = 0; row < m; ++row) {
                if (mat1[row][col1] != mat2[row][col2]) {
                    identical = false; // Не се идентични
                    break;
                }
            }

            if (identical) {
                count++; // Порасни бројот на идентични колони
                break; // Најдовме идентична колона, нема потреба да проверуваме понатаму
            }
        }
    }

    cout<<count<<endl;
    return 0;
}