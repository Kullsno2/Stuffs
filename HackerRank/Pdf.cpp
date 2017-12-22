#include<bits/stdc++.h>
using namespace std;
int main()
{
	int area,height=1,width=1,i,flag;
	int a[125]={};
	char s[11];
	for(i=97;i<=122;i++)
	{
		cin>>a[i];
	}
	scanf("%s",s);
	width=strlen(s);
	for(i=0;i<width;i++)
	{
		flag=a[s[i]];
		if(flag>height)
		height=flag;		
	}
	area=width*height;
	cout<<area;
	return 0; 
}
