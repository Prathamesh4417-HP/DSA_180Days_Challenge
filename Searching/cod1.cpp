#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {2,4,6,1,24};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int x = 24;
    // cin>>x;

    for(int i=0;i<=n;i++)
    {
        if(arr[i] == x)
        cout<<i;
    }

    return -1;
}