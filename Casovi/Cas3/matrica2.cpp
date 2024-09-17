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

    int countRow = m - 1;
    for (int j = 0; j < n; ++j) {
        if(countRow < 0) break;
        for (int i = 0; i <= countRow; ++i) {
            cout<<mat[i][j]<<" ";
        }
        for (int i = j+1; i < n; ++i) {
            cout<<mat[countRow][i]<<" ";
        }
        countRow--;
        cout<<endl;
    }
    return 0;
}