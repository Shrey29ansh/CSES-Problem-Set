#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str1,str2;
	long i,j,k=0,length,count,m,LOOP;
	cin>>str1;
	length = str1.length();
	count = length;
	LOOP = length;
	if(length<=2)
		cout<<str1;	
	else{
		for(i=0;i<length;i++){
			for(j=i+1;j<length;j++){
				if(str1[i]==str1[j]){
					str2[k]=str1[i];
					str2[LOOP-1-k]=str1[i];
					for(m=j;m<length;m++)
						str1[m]=str1[m+1];
					length--;
					count=count-2;
					k++;
					break;
				}
				else{
					//cout<<str1[i]<<"\n";
					//str2[LOOP/2]=str1[i];
				}
					
			}
		}
		//cout<<str2[str1.length()/2]<<"\n";
		if(count<=1){
			for(i=0;i<str1.length();i++)
				cout<<str1[i];
		}
		else	
			cout<<"NO SOLUTION";
	}
}
