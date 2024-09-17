#include<iostream>
using namespace std;

int main(){
    int niza[100];
    int n;
    int parni = 0, neparni = 0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    for (int i = 0; i < n; ++i) {
        if(i % 2 == 0){
            parni += niza[i];
        }else if(i % 2 == 1 && niza[i] % 2 == 0){
            neparni += niza[i];
        }
    }

    cout<<parni<<"*"<<neparni<<"="<<parni*neparni<<endl;
    return 0;
}
