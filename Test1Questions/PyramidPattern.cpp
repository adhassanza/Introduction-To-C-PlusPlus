/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345
*/
// Start code
#include<iostream>
using namespace std;

int main(){
    int n,s,val1,val2;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int s=1;
        while(s<=(n-i))
        {
            cout<<" ";
            s++;
        }
        int j=1;
        val1=i;
        while(j<=i)
        {
            cout<<val1;
            val1--;
            j++;
        }
        int k=1;
        val2=2;
        while(k<i)
        {
            cout<<val2;
            val2++;
            k++;
        }
        cout<<endl;
        i++;
    }
}
