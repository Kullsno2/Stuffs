#include<bits/stdc++.h>
using namespace std;
unsigned logarithm(unsigned int n,unsigned int b)
{
if(n>b-1)
return 1+logarithm(n/b,b);
else
return 0;
}
int main()
{
unsigned int number,base;
cout<<"Enter number :";
cin>>number;
cout<<"Enter base :";
cin>>base;
cout<<logarithm(number,base);
return 0;
}
