// Reverse array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[6] = {1,2,3,4,5,6};

    int start = 0, end = 5;

    while(start < end)
    {
        swap(arr1[start], arr1[end]);
        start++;
        end--;
    }

    for(int i=0;i<6;i++)
    {
        cout<<arr1[i]<<" ";
    }

    return 0;
}
