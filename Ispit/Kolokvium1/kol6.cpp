//
// Created by Teodora on 11/12/2023.
//
#include<iostream>
using namespace std;
int main(){
    int z, a, b;
    int countZ=0;
    int countAB=0;
    cin>>z;
    while(cin>>a>>b){
        countAB++;
        if(a==0 && b==0)
            break;
        if(a+b==z)
            countZ++;
    }
    float procent=(100.0/(countAB-1))*countZ;
    cout<<"Vnesovte "<<countZ<<" parovi od broevi cij zbir e "<<z<<endl;
    cout<<"Procentot na parovi so zbir "<<z<<" e "<<procent<<"%"<<endl;
    return 0;
}
