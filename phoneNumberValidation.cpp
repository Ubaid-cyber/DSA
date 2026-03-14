#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int phoneNumberVaidation(int phoneNumber)
{
    int count = 0;
    while (phoneNumber > 0)
    {
        int digit = phoneNumber % 10;
        count++;
        phoneNumber = phoneNumber / 10;
    }
    return count;
}

int main()
{
    int phoneNumber;
    cout << "please enter the phone number";
    cin >> phoneNumber;

    int result = phoneNumberVaidation(phoneNumber);

    if (result == 10)
    {
        cout << "Valid Phone Number Alow";
    }
    else
    {
        if (result < 10)
            cout << "Invalid phone numer phone number must be 10 digits";
    }

    return 0;
}