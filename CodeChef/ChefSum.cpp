#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000];
    int t,n,i;
    int ans,ansindex;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ans=a[1];
        ansindex=1;
        for(i=2;i<=n;i++)
        {
            if(a[i]<ans)
            {
                ans=a[i];
                ansindex=i;
            }
        }
        cout<<ansindex<<endl;
    }
    return 0;
}
