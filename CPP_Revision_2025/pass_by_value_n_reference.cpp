#include <bits/stdc++.h>
using namespace std;

// pass by value - send a copy of the value and not the exact thing itself
void addMoreByValue(int num1, int num2)
{
    num1++;
    num2++;
    cout << "inside addMoreByValue: " << num1 << "," << num2 << endl;
}
void addMoreByReference(int &num1, int &num2)
{
    num1++;
    num2++;
    cout << "inside addMoreByReference: " << num1 << "," << num2 << endl;
}
int main()
{
    int val1, val2;
    cin >> val1 >> val2;
    addMoreByValue(val1, val2);
    cout << "inside main: " << val1 << "," << val2 << endl;
    addMoreByReference(val1, val2);
    cout << "inside main: " << val1 << "," << val2 << endl;
    return 0;
}

// note that arrays are always passed by reference and not by value:
// void arrChange(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         arr[i]++;
//         cout << arr[i] << ";";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n = 5;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     arrChange(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << ",";
//     }
//     return 0;
// }