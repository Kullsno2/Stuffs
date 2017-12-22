#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,count;
    string s,r;
    getline(cin,s);
    i=s.size()-1;
    while(i>=0)
    {
        r[j++]=s[i--];
    }
    r[j]='\0';
    j=0;
    while(r[j]!='\0')
    {
        cout<<r[j];
        j++;
    }
    return 0;
}
