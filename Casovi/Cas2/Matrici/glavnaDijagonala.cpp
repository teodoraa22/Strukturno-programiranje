#include <iostream>
#include <iomanip>
using namespace std;

//GLAVNA DIJAGONALA  i==j

int main(){
    int n;
    cin>>n;
    int matrica[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matrica[i][j];
        }
    }

    //pozitivni vo negativni i negativni vo pozitivni
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j){
                matrica[i][j] *= -1;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<setw(3)<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}