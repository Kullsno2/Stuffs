#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main()
{
int t=0,chap=0,i=0,j=0,flag=0,countflag=0,dummy=0,counter=1;
cin>>t;
while(t--)
{
i=0,j=0,counter=1,flag=0,countflag=0;
m.clear();
cin>>chap;
for(i=0;i<chap;i++)
{
cin>>j;
if(j==counter)
dummy=0;
else
countflag=1;
m[j]++;
counter++;
}
for(i=1;i<=chap;i++)
{
if(m[i]!=1)
flag=1;
}
if((flag==0)&&(countflag==1))
    cout<<"yes"<<endl;
else
    cout<<"no"<<endl;
}
return 0;
}
