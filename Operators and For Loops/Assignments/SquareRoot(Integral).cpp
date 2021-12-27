/*
Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
Integer N
Output Format :
Square root of N (integer part only)
Constraints :
0 <= N <= 10^8
Sample Input 1 :
10
Sample Output 1 :
3
*/

// Start code
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1 || n==2 || n==3)
    {
        cout<<1;
        return 0;
    }
    for (int i=0;i<=n;i++)
    {
        if((i*i)>n)
        {
            cout<<i-1;
            return 0;
        }else if( (i*i)== n )
        {
            cout<<i;
            return 0;
        }       
    }	
}
