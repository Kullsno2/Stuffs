/*
One of my favorite problems which gave me confidence :)
Algorithm involved : Brute Force
Time when coded :0040HRS
Date : 20-10-2017
*/
#include <bits/stdc++.h>
using namespace std;
map<int,int>m,ind,element;
int main() {
	int n,flag=0,count=5001,i,temp,f1,f2,f3;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>temp;
		m[temp]++;
		element[i]=temp;
		ind[i]=1;

	}
	if(m[1]<count)
	count=m[1];
	if(m[2]<count)
	count=m[2];
	if(m[3]<count)
	count=m[3];
	cout<<count<<endl;
	while(count>0)
	{
		flag=0,f1=0,f2=0,f3=0;
		for(i=1;i<=n;i++)
		{
			if(flag==-1)
			break;
			if(ind[i]!=-1)
			{
				if(element[i]==1 && f1==0)
				{
				f1=i;
				ind[i]=-1;
				}
				if(element[i]==2 && f2==0)
				{
				f2=i;
				ind[i]=-1;
				}
				if(element[i]==3 && f3==0)
				{
				f3=i;
				ind[i]=-1;
				}


			}
			if(f1>0 && f2>0 && f3>0)
			flag=-1;


		}
		cout<<f1<<" "<<f2<<" "<<f3<<endl;;
		count--;
	}

	return 0;
}
