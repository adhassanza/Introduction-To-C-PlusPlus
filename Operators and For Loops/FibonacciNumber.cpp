/*
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
The first line of each test case contains a real number ‘N’.
Output Format :
For each test case, return its equivalent Fibonacci number.
Constraints:
1 <= N <= 10000     
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.
*/

// start code

#include<iostream>
using namespace std;

int main(){
    //Write your code here. 
    int n;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<1;
        return 0;
    }
    int x=1,y=1,z;
    for(int i=3;i<=n;i++)
    {
        z=x+y;
        x=y;
        y=z;
    }
    cout<<z;
}
    