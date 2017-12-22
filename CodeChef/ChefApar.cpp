#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,count1,count0,due;
int a[100000];
cin>>t;
while(t--)
{
count1=0,count0=0,due;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
if(a[i]==1)
    count1++;
if(a[i]==0)
    count0++;
}
if(count1==0)
    due=count0*1100;
else if(count0==0)
    due=0;
else
{
 for(i=2;i<n;i++)
 {
        if(a[i]==1&&a[i-1]==0)
        due=due+1200;
        if(a[i]==1&&a[i-1]==1)
        due=due+0;
        if(a[i]==0&&a[i-1]==1)
        due=due+1100;
        if(a[i]==0&&a[i-1]==0)
        due=due+2200;
 }
}
cout<<due<<endl;
}
return 0;
}
