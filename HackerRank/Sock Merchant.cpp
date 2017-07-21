#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0,sum=0,max=0;
	int c[101]={};
	cin>>n;
	while(n--)
	{
		cin>>i;
		c[i]++;
		if(i>max)
		max=i;
	}
	for(i=0;i<=max;i++)
	{
		c[i]/=2;
		sum+=c[i];
	}
	
	cout<<sum<<endl;
	return 0;
	
}

