#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 9998; i >= 1000; i-=2) {
        if(i % 127 == 0){
            sum += i;
            cout<<i<<endl;
        }
    }
    cout<<sum;
    return 0;
}