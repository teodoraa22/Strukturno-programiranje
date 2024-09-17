//
// Created by Teodora on 11/27/2023.
//

#include<iostream>
using namespace std;

int reverse(int number){
    int reverse = 0;
    while(number){
        reverse = reverse * 10 + number % 10;
        number/=10;
    }
    return reverse;
}

bool isPalindrome(int number){
    return number == reverse(number);
}

int findLargest(int start, int end){
    int largest = 0;
    for (int i = start; i <= end ; ++i) {
        if(isPalindrome(i) && i > largest){
            largest = i;
        }
    }
    return largest;
}

int main(){
    int pocetok, kraj;
    cin>>pocetok>>kraj;
    cout<<"Largest Palindromic Number: "<<findLargest(pocetok, kraj);
    return 0;
}
