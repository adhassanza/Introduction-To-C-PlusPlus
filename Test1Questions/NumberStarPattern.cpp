/*
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/

// Start code
#include<iostream>
using namespace std;

int main(){
    int n,val;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        val=1;
        int j=1;
        while(j<=(n-i+1))
        {
            cout<<val;
            val++;
            j++;
        }
        int s=1;
        while(s<= i-1)
        {
            cout<<"**";
            s++;
        }
        int k=1;
        val = n-i+1;
        while(k<=(n-i+1))
        {
            cout<<val;
            val--;
            k++;
        }
        cout<<endl;
    	i++;
    }
}


