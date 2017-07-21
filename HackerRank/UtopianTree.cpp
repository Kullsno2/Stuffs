#include<bits/stdc++.h>
using namespace std;
int main()
{
	int height;
	int t,n;
	cin>>t;
	while(t--)
	{
		height=1;
		cin>>n;
		if(n%2==0)
        {
         n/=2;
		height=pow(2,n+1)-1;
        }
		else
		{
		n/=2;
		height=pow(2,n+1)-1;
		height=height*2;
		}
		cout<<height<<endl;			
	}
	return 0;
}
