#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
int n;
string s;
cin>>n;
while(n--)
{
    cin>>s;
    if(m[s]==0)
    {
        cout<<"OK"<<endl;
        m[s]++;
    }
    else
    {
        cout<<s<<m[s]<<endl;
        m[s]++;
    }
}
return 0;
}
