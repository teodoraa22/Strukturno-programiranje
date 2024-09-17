#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int m, n;
    int k, l; //pozicii na jabolkoto
    cin>>m>>n>>k>>l;
    int mat[m][n];
    cin.ignore();
    char line[100]; //naredbite kako se dvizi zmijata
    cin.getline(line, 100);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            mat[i][j] = 0;
        }
    }

    mat[0][0] = 1; //na pocetok glavata na zmijata e na pozicija 00
    int x = 0, y = 0; //indeksite na matricata
    int flag = 1; //flag = 1(NADOLE); flag = 2(NAGORE); flag = 3(NADESNO); flag = 4(NALEVO)
    for (int i = 0; i < strlen(line); ++i) {
        char str = line[i];
        if(flag == 1){
            if(str == 'F'){
                x++;
            } else if(str == 'L'){
                y++;
                flag = 3;
            } else if(str == 'R'){
                y--;
                flag = 4;
            }
        }else if(flag == 2){
            if(str == 'F'){
                x--;
            } else if(str == 'L'){
                y--;
                flag = 4;
            } else if(str == 'R'){
                y++;
                flag = 3;
            }
        }else if(flag == 3){
            if(str == 'F'){
                y++;
            } else if(str == 'L'){
                x--;
                flag = 2;
            } else if(str == 'R'){
                x++;
                flag = 1;
            }
        }else {
            if(str == 'F'){
                y--;
            } else if(str == 'L'){
                x++;
                flag = 1;
            } else if(str == 'R'){
                x--;
                flag = 2;
            }
        }

        if(x == k && y == l){
            cout<<"NJAM"<<endl;
            return 0;
        }

        if(x < 0 || x > m - 1 || y < 0 || y > n -1 || mat[x][y] == 1){
            cout<<"OUCH"<<endl;
            return 0;
        }
        mat[x][y] = 1;
    }
    return 0;
}