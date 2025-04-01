#include <bits/stdc++.h>

using namespace std;

int maxx(int num1, int num2) //cant define function name to be same as inbuilt function ex. 'max' in this case
{
    if (num1 > num2)
    {
        return num1;
    }
    // if no return statement is given for a case when num1<num2, function will return garbage value
    else
        return num2;
}
int main()
{
    int num1, num2;
    cout << "Enter num1 num2: ";
    cin >> num1 >> num2;
    cout << "Larger number is " << maxx(num1, num2);
    return 0;
}