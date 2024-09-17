//
// Created by Davor on 11/18/2023.
//
#include<iostream>
using namespace std;
int main(){
    int z, a, b;
    int countZ=0, countAB=0;
    cin>>z;
    while(cin>>a>>b){
        countAB++;
        if(a==0 && b==0)
            break;
        if(a+b==z)
            countZ++;
    }
    double procent=(100.0 / (countAB-1)) * countZ;
    cout<<"Vnesovte "<<countZ<<" parovi od broevi chij zbir e "<<z<<endl;
    cout<<"Procentot na parovi so zbir "<<z<<" e "<<procent<<"%";
    return 0;
}
