#include<iostream>
using namespace std;

int main() {
    int niza1[100];
    int niza2[100];
    int niza3[100];
    int n, m;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> niza1[i];
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> niza2[i];
    }

    int br1 = 0, br2 = 0;
    int flag = 1;

    for (int i = 0; i < n + m; ++i) {
        if(flag){
            niza3[i] = niza1[br1++];
            flag = 0;

            if(br1 > n){
                niza3[i] = niza2[br2++];
                flag = 0;
            }
        }else{
            niza3[i] = niza2[br2++];
            flag = 1;

            if(br2 > m){
                niza3[i] = niza1[br1++];
                flag = 1;
            }
        }
    }

    for (int i = 0; i < n + m; ++i) {
        cout<<niza3[i]<<" ";
    }
    cout<<endl;
    return 0;
}