#include<bits/stdc++.h>
using namespace std;
map<int,int>p;
int main()
{
int t,i,n,m,a,b,count;
cin>>t;
while(t--)
{
count=0;
p.clear();
cin>>n;
cin>>m;
for(i=1;i<=n;i++)
p[i]=1;
for(i=1;i<=m;i++)
{
cin>>a;
cin>>b;
p[a]=0;
p[b]=0;
}
for(i=1;i<=n;i++)
{
if(p[i]==1)
count++;
}
if(count%2==0)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}
return 0;
}
