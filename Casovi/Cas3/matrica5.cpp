#include <iostream>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m;
    int mat[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>mat[i][j];
        }
    }
    cin>>k;

    for (int i = 0; i <= n-k; ++i) {
        for (int j = 0; j <= m-k; ++j) {
            int sum = 0;
            int count = 0;
            for (int l = j; l < j+k; ++l) {
                sum += mat[i][l];
                sum += mat[i + k - 1][l];
                sum += mat[i + k - 1 - count][l];
                count++;
            }
            sum -= mat[i + k -1][j];
            sum -= mat[i][j + k - 1];
            cout<<sum<<" ";
        }
    }
    return 0;
}