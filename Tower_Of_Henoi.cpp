#include <iostream>
#include<vector>
using namespace std;
int count=0;
int countTower(int num,int from, int to, int mandat_rod){
	if(num==1){
		count++;
		return count;
	}
	countTower(num-1,from,mandat_rod,to);
	count++;
	countTower(num-1,mandat_rod,to,from);
	return count;
}
void Tower(int num,int from, int to, int mandat_rod){
	if(num==1){
		cout<<from<<" "<<to<<endl;
		return;
	}
	Tower(num-1,from,mandat_rod,to);
	cout<<from<<" "<<to<<endl;
	Tower(num-1,mandat_rod,to,from);
}

int main(){
	int n,left=1,right=3,middle=2;
	cin>>n;
	count = countTower(n,left,right,middle);
	cout<<count<<endl;
	Tower(n,left,right,middle);
}



