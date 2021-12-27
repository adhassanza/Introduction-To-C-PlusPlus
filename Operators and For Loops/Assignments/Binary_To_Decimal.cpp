/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
*/

// Start code
#include<iostream>
using namespace std;

int main() {
    long n;
    int r;
    cin>>n;
    int e=0;
    int sum=0;
    int p=1;
    while(n>0)
    {
        r=n%10;
        sum = sum + p*r;
        n=n/10;
        e++;
        p= p*2;
    }
    cout<<sum;	
}
 
