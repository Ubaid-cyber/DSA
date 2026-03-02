#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int Numbers[], int size, int target) {
   
    for (int i = 0; i < size; i++) {
       
        if (Numbers[i] == target) {
            return i; 
        }
    }
    return -1; 
}


int main(){
    int Numbers []={10,20,30};
    int target=40;
    int size=3;

    int result = linearSearch(Numbers, size, target);
    if (result!=-1){
        cout<< result<< endl;

    } else{
        cout<< "element not found";
    }


 return 0;
}