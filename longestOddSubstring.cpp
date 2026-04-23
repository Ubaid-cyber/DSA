#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
   public:
    string largeOddNum(string& s) {
        int n = s.length();
        string ans = "";

        // odd logic
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] % 2 == 1) {
                ans = s.substr(0, i + 1);
                break;
            }
        }
        // empty logic

        if (ans == "") {
            return "";
        }
        // handlig zeros in the string
        //Method 1 
        for (int i=0; i< ans.length();i++){
            if(ans[i]== '0'){
             continue;
            } else {
            return ans.substr(i);
            }
        }
    }
};

int main() {
    Solution solution;
    string num = "504";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}