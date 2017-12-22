#include<bits/stdc++.h>
using namespace std;
int main()
{
int t=0;
long long int u,v,sum,rank;
cin>>t;
while(t--)
{
cin>>u;
cin>>v;
sum=u+v+1;
sum=(sum)*(sum+1)/2;
rank=sum-v;
cout<<rank<<endl;
}
return 0;
}
