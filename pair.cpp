#include<iostream>
#include<bits/stdc++.h>
#include <utility>
using namespace std;

    // pair  is somethinglike when we have two values and wants to store that in a signe varible of any type 

    //Syntax

    // lets used the function for readilibity 

    void explainPain(){
        
        //pair<int,int> pair = make_pair(1,2);

    //   pair<pair<int,int>, pair<int,int>> p1 = {{1,2},{2,3}};
    //     cout << p1.second.second ;

    pair <pair<int,char>,int > pr3 ={{1,'A'},8};
    cout << pr3.first.first << endl;
      cout << pr3.first.second << endl;
    }
    

int main(){

    explainPain();

return 0;
}