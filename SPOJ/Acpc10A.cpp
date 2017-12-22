#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d;
while(1)
{
cin>>a>>b>>c;
if(a==0 && b==0 && c==0)
break;
else
 {
     if((b-a)==(c-b))
    {
        d=(2*c)-b;
        cout<<"AP"<<" "<<d<<endl;
    }
    else
    {
       d=c*(c/b);
       cout<<"GP"<<" "<<d<<endl;
    }
 }
}
return 0;
}
