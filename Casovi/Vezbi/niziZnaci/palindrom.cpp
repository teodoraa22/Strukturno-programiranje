#include<iostream>
#include<cstring>
using namespace std;

int isPalindrom(char line[]){
    for (int i = 0; i < strlen(line) / 2; ++i) {
        if(line[i] != line[strlen(line)-1-i]){ //pr. kalabalak line[0] == k && line[9-1-0] == k
            return 0;
        }
    }
    return 1;
}

int imaZnak(char line[]){
    for (int i = 0; i < strlen(line); ++i) {
        if(ispunct(line[i])){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    char line[80];
    char longest[80];
    int max = 0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin.getline(line, 80);

        if(isPalindrom(line) && imaZnak(line)){
            if(strlen(line) > max){
                max = strlen(line);
                strcpy(longest, line);
            }
        }
    }

    if(max > 0){
        cout<<longest<<endl;
    }else{
        cout<<"Nema!"<<endl;
    }
    return 0;
}