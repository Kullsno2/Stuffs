#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int sum,i,l,r,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>sum;
    for(i=0;i<=n-3;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
        if(a[i]+a[l]+a[r]==sum)
        {
            cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
            break;
        }
        else if(a[i]+a[l]+a[r]<sum)
            l++;
            else
                r--;
        }

    }
    return 0;
}
