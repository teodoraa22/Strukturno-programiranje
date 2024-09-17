#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

//    int dimenzija = ceil(sqrt(n));
    int stepen = 1;
    while (stepen*stepen <= n){
        stepen++;
    }

    int matrica[stepen][stepen];
    int count = 1;
    for (int j = 0; j < stepen; ++j) {   //koloni
        if(j % 2 == 0){
            for (int i = 0; i < stepen; ++i) { //redici
                if(count > n){
                    matrica[i][j] = 0;
                } else{
                    matrica[i][j] = count++;
                }
            }
        }else{
            for (int i = stepen - 1; i >= 0; --i) {
                if(count > n){
                    matrica[i][j] = 0;
                } else {
                    matrica[i][j] = count++;
                }
            }
        }
    }

    for (int i = 0; i < stepen; ++i) {
        for (int j = 0; j < stepen; ++j) {
            cout<<setw(3)<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}