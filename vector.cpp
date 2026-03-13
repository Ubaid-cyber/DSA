#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int erase(){
vector<int> vec = {0,1,2};

for(auto it = vec.begin(); it != vec.end(); ++it){
      if (it == vec.end()-1)
      it == vec.erase(it);
      it++;
      

}
 return -1;
}

int main(){
    int result = erase();
    cout<<result;
    
return 0;
}