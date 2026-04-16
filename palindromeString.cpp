#include<iostream>
#include<bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
    public:
        // Function to check if a given string is a palindrome
        bool palindromeCheck(string& s) {
            int left = 0;             
            int right = s.length() - 1; 

            // Iterate while start pointer is less than  end pointer
            while (left < right) {
                // If characters don't match, it's not a palindrome
                if (s[left] != s[right]) {
                    return false;
                }
                left++;   
                right--;  
            }
            return true;  
        }
};

int main() {
    Solution solution;
    string str = "racecar";  

    if (solution.palindromeCheck(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
