#include<bits/stdc++.h>
using namespace std;
int main()
{
int y,m=9,d,leap=0;
cin>>y;
if(y>1918)
{
if(y%4==0)
leap=1;
if(y%100==0)
leap=0;
if(y%400==0)
leap=1;
if(leap==1)
d=12;
else
d=13;
}
else if(y==1918)
{
d=26;
}
else
{
if(y%4==0)
leap=1;
if(leap==1)
d=12;
else
d=13;
}
cout<<d<<".0"<<m<<"."<<y;
return 0;
}
