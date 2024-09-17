//
// Created by Teodora on 10/29/2023.
//

#include<iostream>
using namespace std;

int main(){
    int broj,prva,vtora,treta;
    bool ediniciParenbroj;
    cin >> broj;
    if(broj>=100 && broj<=999){
        prva=broj/100;
        vtora=(broj/100)%10;
        treta=broj%10;
        cout << "Vrednosta na stotki, desetki i edinici e: " << prva << " " << vtora << " " << treta << endl;
        if(treta%2==0){
            ediniciParenbroj=true;
        }
        else{
            ediniciParenbroj= false;
        }
        cout << "Vrednosta na ediniciParenbroj e: " << ediniciParenbroj;
    }
    else{
        cout << "Ne stanuva zbor za tricifren broj." << endl;
    }
    return 0;
}