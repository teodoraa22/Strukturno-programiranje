//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    char hek;
    int zbir=0;
    while(cin>>hek){
        if(hek=='A' || hek=='a'){
            zbir+=10;
        }else if(hek=='B' || hek=='b'){
            zbir+=11;
        }else if(hek=='C' || hek=='c'){
            zbir+=12;
        }else if(hek=='D' || hek=='d'){
            zbir+=13;
        }else if(hek=='E' || hek=='e'){
            zbir+=14;
        }else if(hek=='F' || hek=='f'){
            zbir+=15;
        }
        if(hek>='0' && hek<='9'){
            int tmp=hek-'0';
            zbir+=tmp;
        }
        if(hek=='.')
            break;
    }
    int c1=zbir/10%10;
    int c2=zbir%10;
    if(zbir%16==0){
        if(c1==1 && c2==6)
            cout<<"Poln pogodok";
        else
            cout<<"Pogodok";
    }else
        cout<<zbir;
    return 0;
}
