#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,i,flag=0;
    string n;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        l=n.length();
        l--;
        for(i=0;i<=l/2;i++)
        {
            if(n[i]==n[l-i])
                flag=1;
            else
                {
                flag=0;
                break;
                }
        }
        if(flag==1)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;
    }
    return 0;
}
