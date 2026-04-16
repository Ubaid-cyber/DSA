#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    reverse(s.begin(), s.end());
}

int main()
{
    vector<char> s = {'b', 'y', 'e'};
    reverseString(s);
    cout << endl;

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}