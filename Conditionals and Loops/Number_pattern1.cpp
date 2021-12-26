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
    int i=1;
    int value=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i+=1;
        value=j;
    }
}


