/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1


Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
*/

// Start code
#include<iostream>
using namespace std;

int main() {
	int x,n;
    cin>>x>>n;
    long r=1;
    int i=1;
    while(i<=n)
    {
        if(x==0 && n==0)
        {
            break;
        }
        r=r*x;
        i+=1;
    }
    cout<<r;
}
