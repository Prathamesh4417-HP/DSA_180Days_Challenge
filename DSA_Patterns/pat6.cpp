#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row = 5;
    int col = 5;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<j*(j*j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Output Home Work

// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 