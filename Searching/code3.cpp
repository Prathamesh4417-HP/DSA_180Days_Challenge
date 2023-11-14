// Second Max Element

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[6] = {6,3,5,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr.begin(),arr.end());

    cout<<arr[n-1];
}