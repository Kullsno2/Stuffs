#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a[10000],b[10000],i,j,temp,sum=0;
    cin>>t;
    while(t--)
    {
    	sum=0;
    	cin>>n;
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	for(i=0;i<n;i++)
    	cin>>b[i];
    	for(i=0;i<n-1;i++)
    	{
    		for(j=i+1;j<n;j++)
    		{
    			if(a[j]<a[i])
    			{
    				temp=a[i];
    				a[i]=a[j];
    				a[j]=temp;
    			}
    			if(b[j]<b[i])
    			{
    				temp=b[i];
    				b[i]=b[j];
    				b[j]=temp;
    			}
    		}
    	}
    	for(i=0;i<n;i++)
    	{
    		sum=sum+(a[i]*b[i]);
    	}
    	  cout<<sum<<endl;

    }

	return 0;
}
