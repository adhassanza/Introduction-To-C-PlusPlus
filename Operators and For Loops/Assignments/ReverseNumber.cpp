/*
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
*/

// Start code
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    long long n;
    int r;
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    int res = 0;
    while(n>0)
    {
        r=n%10;
        res = res*10 + r;
        n=n/10;
    }
    cout<<res;	
}

