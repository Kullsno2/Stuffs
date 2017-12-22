#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],start=0,endd,s=0,i;
    int sum=0,result=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
     sum=sum+a[i];
     if(sum<0)
     {
        sum=0;
        s=i+1;
     }
     else if(sum>result)
     {
      result=sum;
      start=s;
      endd=i;
     }
    }
    cout<<"The Max Sum is : "<<result<<endl;
    cout<<"Start Index : "<<start<<endl;
    cout<<"End Index : "<<endd<<endl;
    return 0;
}
