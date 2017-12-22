#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[20],i;
    int left,right,temp;
    cin>>n;
    left=0;
    right=n-1;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(left<right)
    {
        while(a[left]%2!=0 && left<right)
            left++;
        while(a[right]%2==0 && left<right)
            right--;
            if(left<right)
            {
                temp=a[left];
                a[left]=a[right];
                a[right]=temp;
                left++;
                right--;
            }
    }
     for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
