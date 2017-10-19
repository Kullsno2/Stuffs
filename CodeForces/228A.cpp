#include<bits/stdc++.h>
using namespace std;
map<long long int,int>m;
int main()
{
    int count=0;
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    m.clear();
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
    if(m[a]>1)
    {
        count+=m[a]-1;
        m[a]=1;
    }
    if(m[b]>1)
    {
        count+=m[b]-1;
        m[b]=1;
    }
    if(m[c]>1)
    {
        count+=m[c]-1;
        m[c]=1;
    }
    if(m[d]>1)
    {
        count+=m[d]-1;
        m[d]=1;
    }

    cout<<count;
    return 0;
}
