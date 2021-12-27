/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
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
        int c=1;
        while(c<=n)
        {
            cout<<n;
            c++;
        }
        cout<<endl;
        n--;
    }
}    