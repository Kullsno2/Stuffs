#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,result=-1,temp,count=-1,t;
cin>>t;
while(t--)
{
count = -1;
result = -1;
cin>>n;
temp = n;
while(temp>0)
{
    temp=temp/2;
    count++;
}
        count++;
        result = pow(2,count)-1-n;
        cout<<result<<endl;
}
}
