#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,count1=0,count0=1,flag=0;
    string b;
    cin>>b;
    len=b.length();
    for(i=0;i<len;i++)
    {
        if(b[i]=='0')
        {
            count0++;
            count1=0;
        }
        if(b[i]=='1')
        {
            count1++;
            count0=0;
        }
        if(count0==7||count1==7)
        {
            flag=1;
            break;
        }
    }
    if(count0==7)
        cout<<"HAZARD";
    if(count1==7)
        cout<<"COUTINHO";
        if(flag==0)
            cout<<"NEITHER";
    return 0;
}
