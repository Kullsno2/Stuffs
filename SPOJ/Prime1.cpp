#include<bits/stdc++.h>
using namespace std;
bool IsPrime(long long int i)
{
    long long int k;
    if(i==1)
        return false;
    if(i==2)
        return true;
    if(i%2==0)
        return false;
    for(k=2;k*k<=i;k++)
    {
        if(i%k==0)
        return false;
    }
    return true;
}
int main()
{
    long long int m,n,i;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(i=m;i<=n;i++)
        {
            if(IsPrime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
