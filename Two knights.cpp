/*  
Problem:
Your task is to count for k=1,2,?,n the number of ways two knights can be placed on a k?k chessboard so that they do not attack each other.
 
Input
The only input line contains an integer n.
 
Output
Print n integers: the results.
 
Constraints
1=n=10000
 
 
Example
Input:
8
 
Output:
0
6
28
96
252
550
1056
1848
 
*/
 
 
//.............................CODE................................
 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	long x=0,i,m;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		m=pow(i,2);
		cout<<(m-1)*m/2-x/2<<endl;
		x=x+16*i-16;
	}
}
