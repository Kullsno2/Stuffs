#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,d,count;
long long int min=INT_MAX,temp;
while(1)
{
    min=INT_MAX;
    count=0;
    cin>>a>>d;
    if(a==0 && d==0)
        break;
    else
    {
        while(a--)
        {
            cin>>temp;
            if(temp<min)
                min=temp;
        }
        while(d--)
        {
            cin>>temp;
            if(temp<=min)
                count++;
        }
        if(count<2)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

    }
}
    return 0;
}
