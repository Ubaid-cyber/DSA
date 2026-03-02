#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
      int a ;
      cout<<"please enter the Integer only";
      cin>>a;

   // a= a << 1;
    if  ( (a & (a-1)) == 0 ){
        cout <<"Its is power of two  Number is "<<a <<endl;

    } else {
        cout <<"NOT A POWER OF TWO";
    }
    
    
    
    
    return 0;
}