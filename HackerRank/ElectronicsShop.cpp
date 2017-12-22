#include<bits/stdc++.h>
using namespace std;
map<int,int>key,usb;
int main()
{
int s,n,m,i,j,cost=-1,flag;
cin>>s;
cin>>n;
cin>>m;
for(i=0;i<n;i++)
{
    cin>>key[i];
}
for(i=0;i<m;i++)
{
    cin>>usb[i];
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        flag=key[i]+usb[j];
        if(flag<=s && flag>cost)
            cost=flag;
    }
}
cout<<cost;
return 0;
}
