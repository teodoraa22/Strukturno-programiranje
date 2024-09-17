#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 100; i < 1000; i+=2) {
        int firstDigit = i / 100;
        int lastDigit = i % 10;
        if(firstDigit == lastDigit){
            sum += i;
            cout<<i<<endl;
        }
    }
    cout<<sum<<endl;
    return 0;
}