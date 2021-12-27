/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
. . . 1
. . 1 2
. 1 2 3
1 2 3 4
The dots represent spaces.
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
*/

// Start code
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int s=1;
        while(s<=n-i)
        {
            cout<<" ";
            s++;
        }
        int star=1;
        while(star<=i)
        {
            cout<<star;
            star++;
        }
        cout<<endl;
        i++;
    }
}