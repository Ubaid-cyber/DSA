#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the string: ";
    cin>>n;
    char s[n];
    int hash[255]={0};
    for (int i= 0; i <n; i++)
    {
        cin>>s[i];
        hash[s[i]]++;
    } 
    cout<<"The frequency of the characters in the string is: "<<endl;     
   for (int i = 0; i < 256; i++)
   {
     
           if (hash[i] > 0)
    {
        cout << char(i) << " : " << hash[i] << endl;
    }
       
   }
    

return 0;
}