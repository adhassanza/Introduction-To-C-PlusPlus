/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
*/

// Start code
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int p;
        p=i;
        int j=1;
        while(j<=i)
        {
            cout<<p;
            p--;
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}



