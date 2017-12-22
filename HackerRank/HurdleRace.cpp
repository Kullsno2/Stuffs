#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,boost=0,max,temp;
cin>>n;
cin>>k;
max=k;
while(n--)
{
    cin>>temp;
    if(temp>max)
    {
        boost=boost + (temp-max);
        max=temp;
    }
}
cout<<boost;
return 0;
}
