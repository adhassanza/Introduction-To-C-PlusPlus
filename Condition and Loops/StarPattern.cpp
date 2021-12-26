/*
Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******

*/

// Start code
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1,c=1;
    while(i<=n)
    {
        int s=1;
        while(s<=n-i)
        {
            cout<<" ";
            s+=1;
        }
        int j=1;
        while(j<=c)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        c=c+2;
        i=i+1;
    }
}

