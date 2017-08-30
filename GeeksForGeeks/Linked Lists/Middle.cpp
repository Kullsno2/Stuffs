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
int middle1(struct node*n)
{
    struct node* slow=n;
    struct node* fast=n;
    while(fast!=NULL &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
int main()
{
int middle=0;
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
cout<<"THE MIDDLE ELEMENT IS"<<endl;
middle=middle1(head);
cout<<middle;
return 0;
}
