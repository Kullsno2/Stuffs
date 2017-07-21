#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,c,max,min,result;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        max=a;
        min=a;
        if(b>max)
            max=b;
        if(c>max)
            max=c;
        if(b<min)
            min=b;
        if(c<min)
            min=c;
            result=(a+b+c)-(max+min);
        cout<<result<<endl;

    }

    return 0;
}
