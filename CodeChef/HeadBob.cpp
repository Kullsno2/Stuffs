#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l;
    string bob;
    int y,n,i,j;
    cin>>t;
    while(t--)
    {
        y=0,n=0,i=0;
        cin>>l;
        cin>>bob;
        for(j=0;j<l;j++)
        {
            if(bob[j]=='Y')
                y++;
            if(bob[j]=='N')
                n++;
            if(bob[j]=='I')
                i++;

        }
        if(i)
            cout<<"INDIAN"<<endl;
        else
        {
            if(y)
            cout<<"NOT INDIAN"<<endl;
            else
            cout<<"NOT SURE"<<endl;
        }
       for(j=0;j<n;j++)
            bob[j]='\0';
    }
    return 0;
}
