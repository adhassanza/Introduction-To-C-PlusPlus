/*
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
*/

// Start code

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    char c='A';
    while(i<=n)
    {
        c='A'+n-i;
        int j=1;
        while(j<=i)
        {
            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }   
}

