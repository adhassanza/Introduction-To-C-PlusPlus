/*
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/

// Start code
#include<iostream>
using namespace std;

int main(){
    int n,sum=0,i=2;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
}