#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,t,a,b,m,n,m1,n1,suma=0,sume=0,flag=0;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	while(m--)
	{
		cin>>m1;
		flag=a+m1;
		if(flag>=s&&flag<=t)
		suma++;
		flag=0;
	}
	while(n--)
	{	
		cin>>n1;
		flag=b+n1;
		if(flag>=s&&flag<=t)
		sume++;
		flag=0;
	}
	cout<<suma<<endl;
	cout<<sume<<endl;
	return 0;
	
}
