#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Num1, Num2;
    cout << "Please enter two number " << endl;
    cin >> Num1 >> Num2;
    if (Num1 > Num2)
    {
        cout << "Num1 is Greater than Num1 :" << Num1 << endl;
    }
    else if (Num1 < Num2)
    {
        cout<<"Num2 is greater than Num1 : " << Num2 << endl;
    }
    else if (Num1==Num2){
        cout <<"Both are same ";
    }

    return 0;
}