#include<bits/stdc++.h>
using namespace std;
map<int,int>a,sum;
int main()
{
int n,temp,max=-1,i,result=-1;
cin>>n;
a.clear();
sum.clear();
while(n--)
{
cin>>temp;
a[temp]++;
if(temp>max)
max=temp;
}
for(i=1;i<=max;i++)
{
sum[i]=a[i]+a[i-1];
if(sum[i]>result)
result=sum[i];
}
cout<<result;
return 0;
}
