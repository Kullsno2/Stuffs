#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=6,a=0,b=0,d=0;
    long long int x,y,i,j;
    cin >> x;
    y=x+1;
    for(i=y;i<=999999;i++)
    {
     n=6,a=0,b=0,j=i;
    while(n>3)
    {
    a+=j%10;
    j=j/10;
    n--;
    }
    while(n>0)
    {
    b+=j%10;
    j=j/10;
    n--;
    }
    d=b-a;
    if(d==0)
    break;
    }
    cout<<i;
    return 0;
}
