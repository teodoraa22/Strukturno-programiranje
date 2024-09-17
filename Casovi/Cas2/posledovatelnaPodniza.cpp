#include <iostream>
#include <cstring>
using namespace std;

/*
    2
    2024
    Srekjna Nova 2024!
    Srekja i zdravje vo novata 20242024 godina. Vi posakuvame se najdobro!
*/

int posledovatelno(char *line, char *podNiza){
    int count = 0;
    int flag = 0;
    int len = strlen(podNiza);
    while (*line != '\0'){
        if(!strncmp(line, podNiza, len)){     //strncmp koristime koga sporeduvame n karakteri
            if(count == 0){                  //prethodno nemame najdeno podniza
                count++;                    //se zgolemuva za 1
                flag = 1;                  //go krevame flagot zatoa sto sme nasle edno pojavuvanje na podnizata
            }else if(flag == 1){          //ako imame najdeno edna podniza
                count++;                 //counterot go zgolemuvame
            }
            line = line + len;         //ako najdeme podniza vo nizata go pomestuvame pokazuvacot za 4 karakteri
        }else {
            flag = 0;                //ako ne najdeme podniza
            line = line + 1;        //gi pomestuvame pokazuvacot za eden karakter
        }
    }
    return count;
}

int main(){
    int n;
    char podNiza[50];
    char line[100];
    cin>>n;
    cin.ignore();
    cin.getline(podNiza, 50);
    for (int i = 0; i < n; ++i) {
        cin.getline(line, 100);
        cout<<i<<" : "<<posledovatelno(line, podNiza)<<endl;
    }
    return 0;
}