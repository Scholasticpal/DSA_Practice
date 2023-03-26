// find pairs of values that add to given value 'k'. print their position in array. the array given are sorted.

#include <iostream>

using namespace std;

int main()
{
    int k = 31;
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j = n-1;
    bool flag = false;
    while(i< j){
        if(arr[i]+arr[j] < k){
            i++;
        }
        else if(arr[i] + arr[j] > k){
            j--;
        }
        else if(arr[i] + arr[j] == k){
            cout<<i<<" "<<j<<endl;
            flag =  true;
            break;
        }
    }
    if(flag == false){
        cout<<"no possible combination";
    }

    return 0;
}
