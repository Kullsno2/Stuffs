#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x,y;
cin>>t;
while(t--)
{
cin>>x;
cin>>y;
if(x%2==0 && y%2==0)
cout<<x+y<<"\n";
else if(x%2!=0 && y%2!=0)
cout<<x+y-1<<"\n";
else
cout<<"No Number\n";
}
return 0;
}
