/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T.
Your task is to find the longest repetition in the sequence.
This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.

Constraints
1<=n<=10^6

Example

Input:
ATTCGGGA

Output:
3
*/

//Code
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	long m=1,i=0,x=1;
	getline(cin,str);
	while(i<str.length()-1)
	{
		if(str[i] == str[i+1])
		{
			m=m+1;
			if(m>=x)
			{
				x=m;
			}
		}
		else 
		{	
			if(x<=m)
			x=m;
			m=1;
		}
		i++;
	}
	cout<<x;
}
