#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
    cin>>t;
    long long int n,m,count=0;
    while(t--)
    {
    cin>>n;
    while(n>0)
    {
    m=n%10;
    if(m==4)
    count++;
    n=n/10;
    }      
    cout<<count<<endl;
    count=0;
    }
    return 0;
}
 
  