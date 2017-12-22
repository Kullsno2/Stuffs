#include<bits/stdc++.h>
using namespace std;
int main()
{
int w=0,flag=0;
float b=0,wf=0,balance;
cin>>w;
cin>>b;
cout<<fixed;
cout<<setprecision(2);//last 2 statements to set the precision of cout to 2 no matter what.
if((float(w)+0.50>b)||(w%5!=0)) //+0.50 so that there's enough amount to pay the transaction charge also !
   cout<<b;
else
{
    wf=(float)w;
    balance=b-wf-0.50;
    cout<<balance;
}
return 0;
}
