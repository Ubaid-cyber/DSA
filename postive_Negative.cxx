#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int Num;
    cout << "Please Enter a number you wanna check " << endl;
    cin >> Num;

    if (Num >= 0)
    {
        cout << "The number is postive " << endl;
    }
    else if (Num < 0)
    {
        cout << "The Number is Negative";
    }

    return 0;
}