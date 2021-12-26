/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
Constraints
0 <= N <= 10^8
Sample Input 1:
1234
Sample Output 1:
6 4
*/

// Start code

#include<iostream>
using namespace std;

int main() {
	int n,r,sum_even=0,sum_odd=0;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            sum_even+=r;
        }
        else{
            sum_odd+=r;
        }
        n=n/10;
    }
    cout<<sum_even<<" "<<sum_odd;   
}
