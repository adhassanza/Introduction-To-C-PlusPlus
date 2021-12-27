/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
*/

// Start code

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==2){
        cout<<2<<endl;
        return 0;
    }
    int i=2;
    while(i<=n)
    {
        bool divided = false;
        int j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                divided = true;
                break;
            }
            j++;
        }
        if(!divided)
        {
            cout<<i<<endl;
        }
        i++;
    }
}



