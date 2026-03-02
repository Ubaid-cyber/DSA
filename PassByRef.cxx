#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int changeArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{

    int arr[] = {1, 2, 3};
    changeArr(arr, 3);
    cout << "im manin function after calling value are below " << endl;

    for (int i = 0;i<3;i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
