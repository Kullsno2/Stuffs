#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,l,i,ujump=0,djump=0;
cin>>t;
string c;
while(t--)
{
    ujump=0,djump=0;
    cin>>c;
    l=c.length();
    for(i=1;i<l;i++)
    {
        if(c[i]=='D' && c[i-1]=='U')
            ujump++;
        if(c[i]=='U' && c[i-1]=='D')
            djump++;

    }
if(djump>ujump)
    cout<<djump<<endl;
else
    cout<<ujump<<endl;
}
return 0;
}
