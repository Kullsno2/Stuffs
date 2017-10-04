#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,arev=0,brev=0,sumrev,sum=0;
    cin>>t;
    while(t--)
    {
        arev=0;
        brev=0;
        sum=0;
        cin>>a;
        cin>>b;
        while(a>0)
        {
            arev=(arev*10)+(a%10);
            a=a/10;
        }
        while(b>0)
        {
            brev=(brev*10)+(b%10);
            b=b/10;
        }
        sumrev=arev+brev;
        while(sumrev>0)
        {
            sum=(sum*10)+(sumrev%10);
            sumrev=sumrev/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
