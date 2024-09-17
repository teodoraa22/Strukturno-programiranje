//
// Created by Teodora on 11/12/2023.
//
#include<iostream>
using namespace std;
int main(){
    int n, pozicija0, pozicija1, pozicija2, pozicija3, pozicija4;
    pozicija0=pozicija1=pozicija2=pozicija3=pozicija4=0;
    while(cin>>n){
        int c1=n%10;
        int c2=(n/10)%10;
        int c3=(n/100)%10;
        int c4=(n/1000)%10;
        int c5=n/10000;

        if(c1>=c2 && c1>=c3 && c1>=c4 && c1>=c5)
            pozicija0++;
        else if(c2>=c1 && c2>=c3 && c2>=c4 && c2>=c5)
            pozicija1++;
        else if(c3>=c1 && c3>=c2 && c3>=c4 && c3>=c5)
            pozicija2++;
        else if(c4>=c1 && c4>=c2 && c4>=c3 && c4>=c5)
            pozicija3++;
        else if(c5>=c1 && c5>=c2 && c5>=c3 && c5>=c4)
            pozicija4++;
    }
    cout<<"0: "<<pozicija0<<endl;
    cout<<"1: "<<pozicija1<<endl;
    cout<<"2: "<<pozicija2<<endl;
    cout<<"3: "<<pozicija3<<endl;
    cout<<"4: "<<pozicija4<<endl;
    return 0;
}
