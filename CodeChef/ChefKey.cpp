#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m,c,i,count=0,result,flag=0,min,max;
    cin>>t;
    while(t--)
    {
        count=0;
        flag=0;
        cin>>n;
        cin>>m;
        cin>>c;
        max=m;
        min=n;
        if(n>m)
        {
            max=n;
            min=m;
        }
           for(i=1;i<=min;i++)
           {
            result=c/i;
            flag=c%i;
            if((result<=max) && flag==0)
               count++;
           }
            cout<<count<<endl;
            }
    return 0;
}
