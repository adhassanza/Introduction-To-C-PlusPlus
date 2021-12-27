/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 13
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
        c='A'+i-1;
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


