#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int Dec = 20;
    int Ans = 0;
    int power=1;
    
    while(Dec>0){
        int rem= Dec%2;
        Dec=Dec/2;
        Ans +=(rem*power);
        power= power*10;
    }
  cout<<Ans;
    return 0;
}