#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,n,r;
    cin>>t;
    while(t--)
    {
    cin>>a;
    cin>>b;
    cin>>n;
    if(n%2!=0)
        a=a*2;
    if(a>b)
        r=a/b;
    else
        r=b/a;
    cout<<r<<endl;
    }
    return 0;
}
