#include<bits/stdc++.h>
using namespace std;
int main()
{
int first=0,last=0,sum=0;
int t=0;
long long int n=0,temp;
cin>>t;
while(t--)
{
    sum=0;
    cin>>n;
    temp=n;
    last=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    first=n;
    sum=first+last;
    if(temp<10)
        cout<<temp<<endl;
    else
    cout<<sum<<endl;
}
}
