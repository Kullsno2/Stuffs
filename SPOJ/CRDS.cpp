#include<bits/stdc++.h>
#define m 1000007
using namespace std;
int main()
{
    long long int r=0,n;
    int t;
    cin>>t;
    while(t--)
    {
      r=0;
      cin>>n;
      r+=3*(n*(n+1)/2)-n;
      r=r%m;
      cout<<r<<endl;
    }
    return 0;
}
