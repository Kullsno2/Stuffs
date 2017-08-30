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
struct node* reverse(struct node *n)
{
    struct node *prev=NULL;
    struct node *current=n;
    struct node *next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
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
cout<<"THE LINKED LIST IS"<<endl;
printlist(head);
cout<<"THE REVERSED LINKED LIST IS"<<endl;
head=reverse(head);
printlist(head);
return 0;
}
