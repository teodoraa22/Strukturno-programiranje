#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int matrica[n][m];    //n e broj na redici, m e broj na koloni

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>matrica[i][j];
        }
    }

    //redovite gi pecatime vo koloni
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<matrica[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}