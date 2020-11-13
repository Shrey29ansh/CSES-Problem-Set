/*
Problem:
Your task is to calculate the number of trailing zeros in the factorial n!.
For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input
The only input line has an integer n.

Output
Print the number of trailing zeros in n!.

Constraints
1=n=109
Example

Input:
20

Output:
4

Logic Example:

871!

871/5=174>=1--count=0+174=174
871/25=34>=1--count=174+34=208
871/125=6>=1--count=208+=214
871/625=1>=1--count=214+1=215
871/3125=0.27<1
Result--215
*/
#include<iostream>
using namespace std;
int main()
{
	long n,m=0,i;
	cin>>n;
	for(i=5;n/i>=1;i=i*5) //Count Untill the 5 power i extends n
	{
		m=m+n/i;		
	}
	cout<<m;
}
