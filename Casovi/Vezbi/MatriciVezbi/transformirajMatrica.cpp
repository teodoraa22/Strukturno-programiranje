#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matrica[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matrica[i][j];
        }
    }

    int zbir = 0;
    float prosek = 0;

    for (int i = 1; i < n-1; ++i) {
        zbir = 0;
        prosek = 0;
        for (int j = 0; j < n; ++j) {
            if(i+j < n-1){
                zbir += matrica[i][j];
                prosek = (float)zbir / (j+1);
            }else if(i+j >= n){
                if(matrica[i][j] < prosek){
                    matrica[i][j] = -1;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}