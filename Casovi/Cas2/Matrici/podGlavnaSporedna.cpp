#include <iostream>
using namespace std;

//SPOREDNA DIJAGONALA  i+j == n-1

int main(){
    int n;
    cin>>n;
    int matrica[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matrica[i][j];
        }
    }

    int start = n/2 + 1;
    for (int i = start; i < n; ++i) {
        for (int j = n-i; j < i; ++j) {
            matrica[i][j] *= -1;
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