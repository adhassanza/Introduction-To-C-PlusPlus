/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
Sample Input :
abc def4 5$
Sample Output :
6 2 2
*/

// Start code

#include<iostream>
using namespace std;
int main()
{
int count1=0,count2=0,count3=0;

    char A;
    A = cin.get();
    while(A!='$')
    {
        
        if(A<='z' && A>='a')
        {
            count1++;
        }else if(A<='9' && A>='0')
        {
            count2++;
        }else
        {
            count3++;
        }
        A = cin.get();
    }
    cout<<count1<<" "<<count2<<" "<<count3;
}
