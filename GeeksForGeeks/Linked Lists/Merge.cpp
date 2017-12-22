#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insert(struct node*n,int data)
{
    struct node*t=n;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=newnode;
}
void printlist(struct node*n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}
struct node *merge(struct node*a,struct node*b)
{
    struct node*result=NULL;
    if(a==NULL)
        return(b);
    if(b==NULL)
        return(a);
    if(a->data<=b->data)
    {
        result=a;
        result->next=merge(a->next,b);
    }
    else
    {
        result=b;
        result->next=merge(a,b->next);
    }
    return result;

};
int main()
{
struct node* a=NULL;
a=(struct node*)malloc(sizeof(struct node));
a->data=1;
a->next=NULL;
insert(a,3);
insert(a,5);
insert(a,7);
insert(a,9);
struct node* b=NULL;
*b=(struct node*)malloc(sizeof(struct node));
b->data=2;
b->next=NULL;
insert(b,4);
insert(b,6);
insert(b,8);
insert(b,10);
cout<<"THE LINKED LIST A IS"<<endl;
printlist(a);
cout<<"THE LINKED LIST B IS"<<endl;
printlist(b);
struct node* result;
result=merge(a,b);
cout<<"THE MERGED LINKED LIST IS"<<endl;
printlist(result);
return 0;
}
