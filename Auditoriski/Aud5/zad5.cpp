//
// Created by Davor on 11/11/2023.
//

#include<iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=1000; i<10000; i++){
        int c4=i%10;
        int c3=(i/10)%10;
        int c2=(i/100)%10;
        int c1=i/1000;
        int sum=c2+c3+c4;
        if(sum==c1){
            cout<<i<<endl;
            ++count;
        }
    }
    cout<<count;
    return 0;
}
