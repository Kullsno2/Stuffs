#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,temp,a[100],sum,left=0,right;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
cin>>sum;
right=n-1;
while(left<right)
{
temp=a[left]+a[right];
if(temp==sum)
{
cout<<a[left]<<" "<<a[right];
break;
}
if(temp<sum)
left++;
if(temp>sum)
right--;
}
return 0;
}
