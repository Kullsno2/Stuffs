#include<bits/stdc++.h>
using namespace std;
map<int,int>a,b;
int main()
{
    int n,m,max,min,i,middle,check,flag1=0,flag2=0,count=0;
    cin>>n;
    cin>>m;
    a.clear();
    b.clear();
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    min=b[0];
     for(i=1;i<m;i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    middle=min/2;
    for(check=max;check<=middle;check=check+max)
    {
         for(i=0;i<n;i++)
         {
             if(check%a[i]==0)
                flag1=1;
             else
             {
                 flag1=0;
                 break;
             }
         }
         for(i=0;i<m;i++)
         {
             if(b[i]%check==0)
                flag2=1;
             else
             {
                 flag2=0;
                 break;
             }
         }
         if(flag1==1 && flag2==1)
            count++;
    }
check=min;
     for(i=0;i<n;i++)
         {
             if(check%a[i]==0)
                flag1=1;
             else
             {
                 flag1=0;
                 break;
             }
         }
         for(i=0;i<m;i++)
         {
             if(b[i]%check==0)
                flag2=1;
             else
             {
                 flag2=0;
                 break;
             }
         }
         if(flag1==1 && flag2==1)
            count++;
    cout<<count;
    return 0;
}