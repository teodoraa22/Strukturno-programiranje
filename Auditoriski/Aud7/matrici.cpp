//
// Created by Teodora on 12/10/2023.
//
#include<iostream>
using namespace std;

int main(){
    int matrica[100][100];
    int red, kolona;
    int zbirNaParniRedici = 0;
    int zbirNaNeparniKoloni = 0;

    cin>>red>>kolona;
    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            cin>>matrica[i][j];
        }
    }

    // Iteriranje na site elementi vo matricata
    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            if(i % 2 != 0){
                zbirNaParniRedici += matrica[i][j];
            }
            if(j % 2 == 0){
                zbirNaNeparniKoloni += matrica[i][j];
            }
        }
    }

    cout<<"Zbirot na parni redici e: "<<zbirNaParniRedici<<endl;
    cout<<"Zbirot na neparni koloni e: "<<zbirNaNeparniKoloni<<endl;
    return 0;
}
