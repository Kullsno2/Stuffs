#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,left,right,d,pl,pr;
    cin>>n;
    cin>>p;
    pl=p;
    pr=p;
    if(pl%2==0)
        pl++;
    left=(pl-1)/2;
    if(n%2==0)
        n++;
    if(pr%2==0)
        pr++;
    right=(n-pr)/2;
    if(left<right)
       cout<<left;
    else
       cout<<right;
    return 0;
}
