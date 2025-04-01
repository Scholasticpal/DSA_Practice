#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "Anmol";
    cout << s[1]; // string stores every character in indices
    s[1] = 'B'; // can change characters this way
    // s[1] = "B"; // will give an error since "" mean string and not characters
    return 0;
}
