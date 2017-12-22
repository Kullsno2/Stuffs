//We can Use Hash Map and do it easily.But here is an example of Moore's Voting Algorithm.Ethuku?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100],key,majorityindex,count;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    majorityindex=0,count=1;
    for(i=1;i<n;i++)
    {
        if(a[majorityindex]==a[i])
            count++;
        else
            count--;
        if(count==0)
        {
            majorityindex=i;
            count=1;
        }
    }
    count=0;
    for(i=0;i<n;i++)
    {
        if(a[majorityindex]==a[i])
            count++;
    }
    if(count>(n/2))
    cout<<"The Majority Element is "<<a[majorityindex];
    else
    cout<<"No Majority Element";
        return 0;
}
