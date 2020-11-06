/*
Problem:
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output
Print the missing number.

Constraints
2<=n<=2*10^5
Example

Input:
5
2 3 1 5

Output:
4
*/

//Code
#include<iostream>
using namespace std;
int main()
{
	long n,x=0,sum,m;
	cin>>n;
	sum= (n*(n+1))/2;
	for(int i=0;i<n-1;i++)
	{
		cin>>m;
		x= x+m;
	}
	n=sum-x;
	cout<<n;
}
