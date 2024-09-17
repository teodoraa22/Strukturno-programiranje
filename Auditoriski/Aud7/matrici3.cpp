//
// Created by Teodora on 12/10/2023.
//
#include<iostream>
using namespace std;

int main(){
    int matrica[100][100];
    int red, kolona;
    int mini[100][100];

    cin>>red>>kolona;
    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            cin >> matrica[i][j];
            mini[i][j] = 0;  // uste ne puknala bomba tamu
        }
    }

    int countPlus = 0;
    for (int i = 1; i < red - 1; ++i) {
        for (int j = 1; j < kolona - 1; ++j) {
            if(matrica[i][j] == 1 &&
               matrica[i][j - 1] == 1 &&   // lev sosed
               matrica[i][j + 1] == 1 &&   // desen sosed
               matrica[i - 1][j] == 1 &&   // goren sosed
               matrica[i + 1][j] == 1) {   // dolen sosed
                    if(mini[i][j] != 1 &&
                       mini[i][j - 1] != 1 &&
                       mini[i][j + 1] != 1 &&
                       mini[i - 1][j] != 1 &&
                       mini[i + 1][j] != 1){
                        countPlus++;
                        mini[i][j] = mini[i][j - 1] = mini[i][j + 1] = mini[i - 1][j] = mini[i + 1][j] = 1;
                    }
            }
        }
    }

    cout<<countPlus<<endl;
    return 0;
}