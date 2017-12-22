#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main()
{
int n,i,sum=0,r=0,avg,temp;
while(1)
{
cin>>n;
if(n!=-1)
{
    r=0;
    sum=0;
   for(i=0;i<n;i++)
   {
       cin>>m[i];
       sum+=m[i];
   }
   if(sum%n!=0)
    r=-1;
   else
   {
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(m[i]<avg)
            temp=abs(m[i]-avg);
        else
            temp=0;
        r=r+temp;
    }
   }
   cout<<r<<endl;
}
else
    break;
}
return 0;
}
