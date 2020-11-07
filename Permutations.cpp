/*
Problem:
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.

Input
The only input line contains an integer n.

Output
Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106

Example 1
Input:
5

Output:
4 2 5 3 1

Example 2
Input:
3

Output:
NO SOLUTION

*/

//Code
#include<iostream>
using namespace std;
int main()
{
	long n,i;
	cin>>n;
	if(n==2 || n==3)
	cout<<"NO SOLUTION";
	else
	{
		for(i=1;i<=n/2;i++)
		cout<<2*i<<" ";
		for(i=0;i<(n+1)/2;i++)
		cout<<2*i+1<<" ";
	}
}
