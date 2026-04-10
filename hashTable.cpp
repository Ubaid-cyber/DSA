#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int array[10]={1,2,3,4,5,5,7,8,9,10};
    int hashTable[10]={0};
    for(int i=0;i<10;i++){
    hashTable[array[i]]++;
    }
    cout<<"Hash Table: "<<endl;
    for(int i=0;i<10;i++){  
        cout<<i<<" : "<<hashTable[i]<<endl;
    }

return 0;
}
