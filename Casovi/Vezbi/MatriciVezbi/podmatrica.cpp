#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int mat[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>mat[i][j];
        }
    }

    int pn, pm;
    cin>>pn>>pm;
    int pod[pn][pm];
    for (int i = 0; i < pn; ++i) {
        for (int j = 0; j < pm; ++j) {
            cin>>pod[pn][pm];
        }
    }

    int count = 0;
    for (int i = 0; i <= n - pn; ++i) {
        for (int j = 0; j <= m - pm; ++j) {
            int flag = 1; //1 matrici se ednakvi 0 ne se ednakvi
             for (int r = i, rPod = 0; r < i + pn; r++, rPod++) {
                 for (int c = j, cPod = 0; c < j + pm; c++, cPod++) {
                     if (mat[r][c] != pod[rPod][cPod]) {
                         flag = 0;
                         break;
                     }
                 }
             }
             if (flag == 1) {
                 count++;
             }
         }
     }
    cout << count;
    return 0;
}