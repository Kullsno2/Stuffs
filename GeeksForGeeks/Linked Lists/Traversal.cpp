#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

};
void printlinkedlist(struct node *n)
{

    while(n!=NULL)
    {
        cout<<n->data<<"-->"<<" ";
        n=n->next;
    }
}
int main()
{
    struct node* head=NULL;
    struct node* first=NULL;
    struct node* second=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter head data : ";
    cin>>head->data;
    head->next=first;
    cout<<"Enter first data : ";
    cin>>first->data;
    first->next=second;
     cout<<"Enter second data : ";
    cin>>second->data;
    second->next=NULL;
    cout<<"The Contents of the linked list are"<<endl;
    printlinkedlist(head);
    return 0;
}
