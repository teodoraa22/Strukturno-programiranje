//
// Created by Davor on 7/30/2024.
//
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char line[100];
    char podNiza[100];
    int max = 0; //max = 0 zatoa sto dolzinata ne moze da bide negativna

    while(cin.getline(line, 100)){
        if(strcmp(line, "0") == 0){ //strcmp = 0, togas nizite se ednakvi
            break;
        }

        int prva = -1, posledna = -1;
        for (int i = 0; i < strlen(line); ++i) {
            if(isdigit(line[i])){
                prva = i;
                break; //ako ne stavam break, kje go zeme indeksot na poslednata cifra
            }
        }
        for (int i = strlen(line) - 1; i >= 0 ; i--) {
            if(isdigit(line[i])){
                posledna = i;
                break;
            }
        }

        int dolzina = posledna - prva; //pr.aaa123aa222aa2aaa23aaaaa22 prvata cifra e na index 3, a poslednata na index 25, logicki 25-3=22, dolzinata na novata niza
        if(dolzina >= max){ //>= zatoa sto dokolku ima 2 reda so ista dolzina da se ispecati posledniot
            max = dolzina;
            strncpy(podNiza, line+prva, max+1); //line+prva pokazuva na prvata cifra(karakter), dodavame max+1 zatoa sto sakame da ni se iskopira i poslednata cifra
            podNiza[max+1] = '\0';
        }
    }

    cout<<podNiza<<endl;
    return 0;
}