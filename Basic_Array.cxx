#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{

    int n;
    cout << "Kitne elements chahiye?: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Please enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "please Enter value for index  :" << i << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.size();

    arr.push_back(50);
   
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "after push back"<<endl << arr.size();
    
    
        return 0;
}