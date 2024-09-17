//
// Created by Teodora on 16.1.2024.
//
#include<iostream>
#include<cstring>
using namespace std;

int sodrzi(char *niza, char *podNiza) {
    if(strlen(podNiza) > strlen(niza))
        return 0;
    for (int i = 0; i <= strlen(niza) - strlen(podNiza); ++i) {
        if(niza[i] == podNiza[0]){
            int flag = 1;
            for (int j = 0; j <= strlen(podNiza); ++j) {
                if(podNiza[j] != niza[i+j])
                    flag = 0;
                    break;
            }
            if(flag)
                return 1;
        }
    }
    return 0;
}

int sodrzi_funkcija(char *niza, char *podNiza) {
    if(strlen(podNiza) > strlen(niza))
        return 0;
    for (int i = 0; i <= strlen(niza) - strlen(podNiza) ; ++i) {
        if(strncmp(niza, podNiza + i, strlen(podNiza)) == 0)
            return 1;
    }
    return 0;
}

int sodrzi_funkcija2(char *niza, char *podNiza) {
    if(strlen(podNiza) > strlen(niza))
        return 0;
    char * res = strstr(niza, podNiza);
    return res!=0;
}

int main(){
    char niza[100];
    char podNiza[100];

    cin.getline(niza, 100);
    cin.getline(podNiza, 100);

    if(sodrzi(niza, podNiza)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    if(sodrzi_funkcija(niza, podNiza)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    if(sodrzi_funkcija2(niza, podNiza)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}