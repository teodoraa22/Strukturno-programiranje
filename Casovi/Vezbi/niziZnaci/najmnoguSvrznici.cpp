#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int svrznici(char *line) {
    int countBukvi = 0;
    int countSvrznici = 0;

    while (*line != '\0'){
        if(ispunct(*line) || isspace(*line)){
            if(countBukvi >= 1 && countBukvi <= 3){
                countSvrznici++;
            }
            countBukvi = 0;
        }else if(isalpha(*line)){
            countBukvi++;
        }
        line = line + 1;
    }

    return countSvrznici;
}

int main(){
    char line[100];
    char niza[100];
    int brojSvrznici;
    int max = 0;

    while(cin.getline(line, 100)){
        brojSvrznici = svrznici(line);
        if(max < brojSvrznici){
            max = brojSvrznici;
            strcpy(niza, line);
        }
    }
    cout << max << ": " << niza << endl;
    return 0;
}