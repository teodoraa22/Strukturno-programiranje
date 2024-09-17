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

    for (int j = 0; j < m; ++j) {
        int kolona = j;
        for (int i = 0; i < n && kolona >= 0; ++i) {
            cout<<mat[i][kolona]<<" ";
            kolona--; //na prtimer kolona = 1 togas kje se namali na 0 i kje se ispise i drugiot element dijagonalno
        }
        cout<<endl;
    }
    return 0;
}