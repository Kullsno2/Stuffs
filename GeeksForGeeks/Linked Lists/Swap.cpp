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
struct node* swap(struct node *n,int x,int y)
{
    struct node *first=n;
    struct node *second=n;
    struct node *prevfirst=NULL;
    struct node *prevsecond=NULL;
    while(first!=NULL && first->data!=x)
    {
      prevfirst=first;
      first=first->next;
    }
     while(second!=NULL && second->data!=y)
    {
      prevsecond=second;
      second=second->next;
    }
    if(prevfirst!=NULL)
        prevfirst->next=second;
    else
        n=second;
    if(prevsecond!=NULL)
        prevsecond->next=first;
    else
        n=first;
    struct node* temp=first->next;
    first->next=second->next;
    second->next=temp;
    return n;
};
int main()
{
struct node* head=NULL;
head=(struct node*)malloc(sizeof(struct node));
head->data=1;
head->next=NULL;
insert(head,2);
insert(head,3);
insert(head,4);
insert(head,5);
cout<<"THE LINKED LIST BEFORE SWAPPING IS"<<endl;
printlist(head);
head=swap(head,1,5);
cout<<"THE LINKED LIST AFTER SWAPPING IS"<<endl;
printlist(head);
return 0;
}
