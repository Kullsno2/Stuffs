#include<bits/stdc++.h>
#define INT_BITS 32
using namespace std;
int leftRotate(int n,unsigned int d)
{
    return (n<<d | n>>(INT_BITS-d));
}
int rightRotate(int n,unsigned int d)
{
    return(n>>d | n<<(INT_BITS-d));
}
int main()
{
    int n,d,left,right;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter Rotation factor : ";
    cin>>d;
    left=leftRotate(n,d);
    right=rightRotate(n,d);
    printf("The Left Rotated number is %d",left);
    printf("\nThe Right Rotated number is %d",right);
    return 0;
}
