#include<iostream>
#include<cstdlib>	
#include<math.h> 
#include<stdlib.h>
using namespace std;
int main()
{
	long test=0,i=0,x=0,temp1,temp2;
	cin>>test;
	long a[test],b[test],j=0;
	for(i=0;i<test;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for(i=0;i<test;i++)
	{
		j=0;
		while(true)
		{
			x=1-(j%2)*3;
			x=abs(x);
			temp1=a[i]-x;
			x = x+pow(-1,j);
			temp2=b[i]-x;
			j++;	
			if(temp1<=0 || temp2<=0)
				break;	
			else
			{
				a[i]=temp1;
				b[i]=temp2;
			}
		}
		//cout<<a[i]<<" "<<b[i];
		if(a[i]==b[i])		
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
}
