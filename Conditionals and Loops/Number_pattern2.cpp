/*
Print the following pattern
Pattern for N = 4
   1
  23
 345
4567   
*/

// Start code

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1,val=1;
    while(i<=n)
    {
        int s=1;
        while(s<=n-i)
        {
            cout<<" ";
            s+=1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<val;
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        val=j;
        i=i+1;
    }
}


