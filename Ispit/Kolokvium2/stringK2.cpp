//
// Created by Teodora on 10.2.2024.
//
#include<iostream>
#include<cstring>
using namespace std;

bool samoglaska(char i) {
    switch (tolower(i)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int main(){
    char string[81];

    while(cin.getline(string, 81)){        //za vnesuvanje povekje linii
        if(string[0] == '#'){
            return 0;
        }

        for (int i = 0; i < strlen(string); ++i) {
            if(!samoglaska(string[i])){
                cout<<string[i];
            }
        }
        cout<<endl;
    }
    return 0;
}