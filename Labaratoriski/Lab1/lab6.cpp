//
// Created by Teodora on 11/5/2023.
//
#include<iostream>
using namespace std;

int main(){
    int jabolka, malini, banani;
    float cena_jabolki, cena_malini, cena_banani;
    int student;
    float vk_suma = 0;
    cin>>jabolka>>malini>>banani>>student;
    cena_jabolki = (jabolka / 100) * 30;
    cena_malini = (malini / 100) * 50;
    cena_banani = (banani / 100) * 40;

    if(jabolka == 200) cena_jabolki *= 0.7;
    else if(jabolka >= 500) cena_jabolki *= 0.5;

    if(malini == 200) cena_malini *= 0.3;
    else if(malini >= 500) cena_malini *= 0.5;

    if(banani == 200) cena_banani *= 0.3;
    else if(banani >= 500) cena_banani *= 0.5;

    vk_suma = cena_jabolki + cena_malini + cena_banani;

    if(student){
        cout << vk_suma - 140 <<endl;
    }
    else{
        cout<< vk_suma <<endl;
    }
    return 0;
}
