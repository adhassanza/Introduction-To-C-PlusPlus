/*
Print the following pattern
Pattern for N = 4
   *  
  *** 
 *****
*******
Input Format :
N (Total no. of rows)
Output Format :
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
        int s=1;
        while(s<=n-i)
        {
            cout<<" ";
            s++;
        }
        int j=1;
        while(j<=i+i-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}



