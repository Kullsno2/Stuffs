#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,i,j,flag=0;
cin>>n;
cin>>m;
char a[n][m];
for(i=0;i<n;i=i+2)          //odd rows fully #'ed
    {
        for(j=0;j<m;j++)
          {
              a[i][j]='#';
          }
    }
for(i=1;i<n;i=i+2)        //even rows fully .'ed
    {
        for(j=0;j<m;j++)
          {
              a[i][j]='.';
          }
    }

for(i=1;i<n;i=i+2)       //single hash in even rows alternating between end and start
    {
        if(flag==0)
        {
            a[i][m-1]='#';
            flag=1;
        }
        else
        {
            a[i][0]='#';
            flag=0;
        }
    }

for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
          {
              cout<<a[i][j];
          }
          cout<<endl;
    }
return 0;
}
