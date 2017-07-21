#include<bits/stdc++.h>
using namespace std;
map<int,int>a,b;
int main()
{
int t,n,k,count;
cin>>t;
while(t--)
{
    count=0;
a.clear();
b.clear();
cin>>n;
cin>>k;
for(int i=1;i<=n;i++)
{
cin>>a[i];
}
for(int i=1;i<=n;i++)
{
    if(a[i]!=i)
    b[a[i]]++;
    else
    b[a[i]]=b[a[i]]-1000;
}
for(int i=1;i<=n;i++)
{

    if(b[i]>=k)
        count++;
}
cout<<count<<endl;
}
return 0;
}
