#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,count=0;
long long int n;
cin>>t;
while(t--)
{
count=0;
cin>>n;
if(n>=100)
{
count=count+(n/100);
n=n%100;
}
if(n>=50)
{
count=count+(n/50);
n=n%50;
}
if(n>=10)
{
count=count+(n/10);
n=n%10;
}
if(n>=5)
{
count=count+(n/5);
n=n%5;
}
if(n>=2)
{
count=count+(n/2);
n=n%2;
}
if(n>=1)
{
count=count+(n);
n=0;
}
cout<<count<<endl;
}
return 0;
}
