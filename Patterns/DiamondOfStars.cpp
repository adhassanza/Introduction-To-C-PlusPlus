/*
Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5
  *
 ***
*****
 ***
  *
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
*/

// Start code
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=(n+1)/2)
    {
        int s=1;
        while(s<=((n+1)/2)-i )
        {
            cout<<" ";
            s++;
        }
        int j=1;
        while(j<=(2*i)-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    int a=1;
    while(a<=(n-1)/2)
    {
       int b=1;
       while(b<=a)
       {
           cout<<" ";
           b++;
       }
        int c=1;
        while(c<=n-2*a)
        {
            cout<<"*";
            c++;
        }
        cout<<endl;
        a++;
        
    }
}
