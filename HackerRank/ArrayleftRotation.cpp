#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d,i,a[100000],b[100000],j;
cin>>n;
cin>>d;
for(i=0;i<n;i++)
{
cin>>a[i];
b[i]='\0';
}
j=n-1;
for(i=n-d-1;i>=0;i--)
{
 b[i]=a[j];
 j--;
}
j=0;
for(i=n-d;i<n;i++)
{
    b[i]=a[j];
    j++;
}
for(i=0;i<n;i++)
    cout<<b[i]<<" ";
return 0;
}
