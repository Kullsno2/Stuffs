#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,length,i,l;
string a;
cin>>t;
while(t--)
{
length=0;
cin>>a;
for(i=0;a[i]!='\0';i++)
{
    length++;
}
if(length<=10)
    cout<<a;
else
{
    l=length-2;
    printf("%c%d%c",a[0],l,a[length-1]);
}
cout<<endl;
}
return 0;
}
