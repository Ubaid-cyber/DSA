#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int Age;
    cout <<"Please Enter your Age "<< endl;
    cin>> Age;
    if (Age<0){
        cout <<"Error Try again" << endl;

    }
    else if (Age>=18 && Age <=60){
        cout <<"Yes You are Eligible "<< endl;
    } else if (Age<18){
        cout <<"You Have Luli " << endl;
    }

return 0;
}