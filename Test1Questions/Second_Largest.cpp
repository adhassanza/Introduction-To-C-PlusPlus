/*
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
Sample Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
*/

// Start code
#include<iostream>
using namespace std;
#include <climits>

int main(){
    int n,max,cur,prev;
    cin>>n;
    int sec=INT_MIN;
    int first = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        if(num == first)
            continue;
        else if(num>first)
        {
            sec = first;
            first = num;
        }
        else if(num > sec)
            sec = num;
    }
    cout<<sec<<endl;   
}


