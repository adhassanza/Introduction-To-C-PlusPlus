/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
Constraints :
0 <= S <= 80
S <= E <=  900
0 <= W <= 40 
*/

// Start code

#include<iostream>
using namespace std;

int main(){
    
    int S,E,W;
    int C;
    cin>>S>>E>>W;
    while(S<=E)
    {
       C=(S-32)*5.0/9;
       cout<<S<<"\t"<<C<<endl;
        S=S+W;
    }
}


