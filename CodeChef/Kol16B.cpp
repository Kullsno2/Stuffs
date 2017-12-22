#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[10000];
int x[10000],n[10000],t,count=1,l,i;
cin>>t;
while(t--)
{
    cin>>l;
    for(i=0;i<l;i++)
    {
    cin>>a[i];
    x[i]=a[i]%65536;
    n[i]=a[i]/65536;
    }
    cout<<"Case "<<count<<":"<<endl;
    for(i=0;i<l;i++)
    {
    cout<<x[i]<<" ";
    }
    cout<<endl;
  for(i=0;i<l;i++)
    {
    cout<<n[i]<<" ";
    }
    cout<<endl;
    count++;
}
return 0;
}
