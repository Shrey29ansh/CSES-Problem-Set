/*
Problem:
You have two coin piles containing a and b coins. On each move, you can either remove one coin from the
left pile and two coins from the right pile, or two coins from the left pile and one coin from the right 
pile. Your task is to efficiently find out if you can empty both the piles.

Input:
The first input line has an integer t: the number of tests.
After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output
For each test, print "YES" if you can empty the piles and "NO" otherwise.

Example
Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES
*/

#include<iostream>
using namespace std;
int main()
{
	long test=0,i=0,x=0,mytemp=0,max,min;
	cin>>test;
	long a[test],b[test];
	for(i=0;i<test;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for(i=0;i<test;i++)
	{
		x=a[i]/2; // no of lines = x+1	
		mytemp=a[i]%2; 
		min=x+2*mytemp; // first number
		max= min + x*3;
		if(b[i]<min || b[i]>max)
			cout<<"NO\n";
		else
		{
			x=b[i]-min;
			if(x%3==0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}

	}
}

