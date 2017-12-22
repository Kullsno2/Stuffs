#include<bits/stdc++.h>
using namespace std;
map<int,long long int>m;
int main()
{
    int t,flag=0;
    long long int n,i,j,k,l;
    cin>>t;
    while(t--)
    {
        m.clear();
        cin>>n;
        flag=0;
        m[0]=2;
        m[1]=1;
        for(i=2;i<n;i++)
        {
            if(flag==0)
            {
                j=i+1;
                m[i]=m[i-1];
                m[i-1]=j;
                flag=1;
            }
            else
            {
                j=m[i-2];
                k=m[i-1];
                l=i+1;
                m[i-2]=k;
                m[i-1]=l;
                m[i]=j;
                flag=0;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<m[i]<<" ";
        }
    }
    return 0;
}
