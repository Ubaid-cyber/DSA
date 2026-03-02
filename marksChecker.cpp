#include <iostream>
using namespace std;

int main()
{
    int marks;
    int counter = 0;
    int limit = 2;   // max invalid attempts allowed

    while (true)
    {
        cout << "Please enter your marks: ";
        cin >> marks;

        // 🔴 Invalid case
        if (marks < 0)
        {
            counter++;
            cout << "Invalid marks\n";

            if (counter == limit)
            {
                cout << "Limit reached\n";
                break;   // stop program
            }

            continue; // ask again
        }

        // 🟢 Valid case
        if (marks >= 40)
            cout << "Pass\n";
        else
            cout << "Fail\n";

        break; // exit after valid input
    }

    return 0;
}