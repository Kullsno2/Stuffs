#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main()
{
	unsigned int min=UINT_MAX,mi=0,ma=0,max=0,sum=0,x;
	int i=5;
	while(i--)
	{
		cin>>x;
		sum+=x;
		if (x<min)
		min=x;
		if (x>max)
		max=x;
	}
	mi=sum-max;
	ma=sum-min;
	cout<<mi<<endl<<ma<<endl;
	return 0;
}
