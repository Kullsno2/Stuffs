#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t=0,n=0,o=1,i=0;
    cin>>t;
    while(t--)
    {
        o=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<o<<" ";
            o=o+2;
        }
        cout<<endl;
    }
    return 0;
}
