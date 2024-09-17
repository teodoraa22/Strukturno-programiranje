#include <iostream>
#include <cstring>
using namespace std;

void lowerCase(char *line){
    for (int i = 0; i < strlen(line); ++i) {
        line[i] = tolower(line[i]);
    }
}

//bool countPodNiza(char *line, char const *subStr){
//    lowerCase(line);
//    char *ptr = strstr(line, subStr);
//    int count = 0;
//    while(ptr != nullptr){  // ako ptr ne e nullptr znaci deka e najdeno pojavuvanje na subStr vo line
//        count++;
//        if(count >= 2){
//            return true;
//        }
//        ptr = strstr(ptr + 1, subStr); //so ptr+1 pomestuvame za 1 karakter vo desno
//    }
//    return false;
//}

int countPodNiza(char *line, char const *substr){
    lowerCase(line);
    int count = 0;
    int len = strlen(substr);
    while(*line != '\0'){
        if(!strncmp(line, substr, len)){
            count++;
            line = line + len;
        }else{
            line = line + 1;
        }
    }
    return count;
}

int main() {
    char line[50];
    int n;
    cin>>n;
    cin.ignore();

//    for (int i = 0; i < n; ++i) {
//        cin.getline(line, 50);
//
//        if(countPodNiza(line, "a1c")){
//            lowerCase(line);
//            cout<<line<<endl;
//        }
//    }

    for (int i = 0; i < n; ++i) {
        cin.getline(line, 50);

        if(countPodNiza(line, "a1c") >= 2){
            lowerCase(line);
            cout<<line<<endl;
        }
    }
    return 0;
}