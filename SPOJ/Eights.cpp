#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a=192,d=250;
    unsigned long long int n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=a+(n-1)*d;
        cout<<x<<endl;
    }
    return 0;
}

