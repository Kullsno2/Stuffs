#include<bits/stdc++.h>
using namespace std;
map<int,int>a,sum;
int main()
{
int n,i,d,m,temp=0,j,count=0;
cin>>n;
a.clear();
sum.clear();
for(i=1;i<=n;i++)
{
cin>>a[i];
}
cin>>d;
cin>>m;
for(i=1;i<=m;i++)
{
    temp=temp+a[i];
}
if(temp==d)
    count++;
sum[0]=temp;
j=1;
for(i=m+1;i<=n;i++)
{
    sum[j]=sum[j-1]+a[i]-a[j];
    if(sum[j]==d)
        count++;
        j++;
}
cout<<count;
return 0;
}
