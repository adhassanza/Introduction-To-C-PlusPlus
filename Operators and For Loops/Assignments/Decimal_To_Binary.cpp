/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range.
So you may want to take the answer as long for CPP and Java.

Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
*/

// Start code
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,var;
    cin>>n;
    if (n==0){
    	cout<<"0";
		return 0;        
    }
    
    bool flag=false;
    for(int i=31;i>=0;i--)
    {
        var= n>>i;
        if(var & 1)
        {
            flag=true;
            cout<<"1";
        }else if(flag==true)
        {
            cout<<"0";
        }
    }
    return 0;    
}
