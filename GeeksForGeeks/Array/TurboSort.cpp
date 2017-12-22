#include <iostream>
using namespace std;
int main() {
	int n=0,i=0,max=0,a[1000001]={};
	cin>>n;
	while(n--)
	{
		cin>>i;
		a[i]++;
		if(i>max)
		max=i;
		
	}
	for(i=0;i<=max;i++)
	{
		while(a[i]>0)
		{
		cout<<i<<endl;
		a[i]--;
		}
	}
	return 0;
}
