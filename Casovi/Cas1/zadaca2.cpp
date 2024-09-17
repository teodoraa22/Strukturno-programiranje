//
// Created by Davor on 7/30/2024.
//
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char z1, z2;
    char line[80];
    char podNiza[80];

    cin>>z1>>z2;
    cin.ignore(); //za da premine vo nov red, odnosno koga kje gi vneseme karakterite kako nov red kje go cita praznoto mesto so cin.ignore() toa se izbegnuva
    while (cin.getline(line, 80)){
        if(!strcmp(line, "#")){
            break;
        }

        int z1Index = -1, z2Index = -1;
        for (int i = 0; i < strlen(line); ++i) {
            if(line[i] == z1){
                z1Index = i;
            }else if(line[i] == z2){
                z2Index = i;
            }
        }

        int dolzina = z2Index - z1Index;
        strncpy(podNiza, line+z1Index+1, dolzina-1); //so line+z1Index+1 pocnuvame od karakterot z1 i pomestuvame na desno zatoa sto ne sakame da se iskopira; dolzina-1 zatoa sto ne sakame da ni se iskopira posledniot znak
        podNiza[dolzina-1] = '\0';

        cout<<podNiza<<endl;
    }
    return 0;
}