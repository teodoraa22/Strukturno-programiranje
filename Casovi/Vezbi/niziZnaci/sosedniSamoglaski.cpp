#include<iostream>
#include<cstring>
using namespace std;

void lowerCase(char *line){
    for (int i = 0; i < strlen(line); ++i) {
        line[i] = tolower(line[i]);
    }
}

bool samoglaska(char c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    return false;
}

int main(){
    char line[100];
    int countParovi = 0;

    while(cin.getline(line, 100)){
        if(!strcmp(line, "#")){
            break;
        }

        for (int i = 0; i < strlen(line); ++i) {
            if(samoglaska(line[i]) && samoglaska(line[i+1])){
                lowerCase(line);
                cout<<line[i]<<line[i+1]<<endl;
                countParovi++;
            }
        }
    }
    cout<<countParovi<<endl;
    return 0;
}