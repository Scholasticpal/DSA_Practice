#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout << "Enter Name: ";
    cin >> name;
    int index = 1;
    for (int i = 1; i < 5; i++)
    {
        switch (index)
        {
        case 1:
            cout << "Day is one" << endl;
            break;
        case 2:
            cout << "Day is two" << endl;
            break;
        default:
            cout << "Other days no." << index << endl;
            // break; break not needed in default since its the last case
        }
        index++;
    }

    return 0;
}