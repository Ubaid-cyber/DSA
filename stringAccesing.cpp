#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string getLongestCommonPrefix(const vector<string> &str)
{
    if (str.empty()) return "";

    string ans = "";

    for (int i = 0; i < str[0].size(); i++)
    {
        char ch = str[0][i];

        for (int j = 1; j < str.size(); j++)
        {
            if (i >= str[j].size() || str[j][i] != ch)
            {
                return ans == "" ? "-1" : ans;
            }
        }

        ans += ch;
    }

    return ans == "" ? "-1" : ans;
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    string result = getLongestCommonPrefix(str);

    cout << "The longest common prefix is: " << result << endl;

    return 0;
}