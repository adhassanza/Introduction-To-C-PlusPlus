/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  232
 34543
4567654
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
*/

// Start code
#include <iostream>
using namespace std;

int main() {
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
        int j=1;
        int c=i;
        while(j<=i)
        {
            cout<<c;
            c++;
            j++;
        }
        j=i-1;
        c=i+i-2;
        while(j>=1)
        {
            cout<<c;
            c--;
            j--;
        }
        cout<<endl;
        i++;
    }    
}
