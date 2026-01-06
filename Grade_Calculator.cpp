#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float Marks ;
    cout<<"Please enter your Marks  " << endl;
    cin>>Marks;

    if (Marks>=90){
        cout<<"Grad A"<< endl;
    } else if (Marks<90 && Marks >=70){
        cout <<"Grad B" <<endl;
    } else if (Marks>=60 && Marks<70){
        cout <<"Grade C" <<endl;
    } else {
          cout <<"Finally You are a fail ";
    }



return 0;
}