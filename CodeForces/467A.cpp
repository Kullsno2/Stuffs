#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,q,count=0,temp=0;
	cin>>n;
	while(n--)
	{
		cin>>p;
		cin>>q;
		temp=q-p;
		if(temp>=2)
		count++;
	}
	cout<<count;
	return 0;
}
