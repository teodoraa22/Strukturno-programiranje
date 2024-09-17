#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char niza[100];
    int bukvi = 0;
    int brojki = 0;
    int znaci = 0;
    int max = 0;

    while (cin.getline(niza, 100)){
        if(!strcmp(niza, "\0")){
            break;
        }

        for (int i = 0; i < strlen(niza); ++i) {
            if(isalpha(niza[i])){
                bukvi++;
            } else if(isdigit(niza[i])){
                brojki++;
            } else if(ispunct(niza[i])){
                znaci++;
            }
        }

        if(bukvi > brojki && bukvi > znaci){
            max = bukvi;
        } else if(brojki > bukvi && brojki > znaci){
            max = brojki;
        } else {
            max = znaci;
        }
    }

    cout<<"Bukvi: "<<bukvi<<" Brojki: "<<brojki<<" Znaci: "<<znaci<<endl;
    cout<<"Najmnogu ima "<<max<<endl;
    return 0;
}