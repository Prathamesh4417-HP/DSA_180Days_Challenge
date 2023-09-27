#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;

    for(row=1;row<=5;row++)
    {
        char ch = 'a' + row -1;
        for(col=1;col<=5;col++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Output

// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 