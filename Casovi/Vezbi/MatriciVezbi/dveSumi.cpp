#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int mat[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>mat[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int s1 = 0, s2 = 0;

            for (int k = j; k < n; ++k) {
                s1 += mat[i][k];
            }

            for (int k = i; k < m; ++k) {
                s2 += mat[k][j];
            }

            if(s1 > s2){
                mat[i][j] = s1;
            } else {
                mat[i][j] = s2;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}