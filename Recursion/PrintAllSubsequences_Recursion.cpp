#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f(int ind, int* arr, vector<int> &ds, int n){
    if(ind>= n){
        for(auto i: ds){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    f(ind+1, arr, ds, n);
    
    ds.pop_back();
    f(ind+1, arr, ds, n);
}
int main(){
    int arr[] = {3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    f(0, arr, ds, n);
    return 0;
}
