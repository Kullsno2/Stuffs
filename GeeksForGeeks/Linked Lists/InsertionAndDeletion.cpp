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
struct node* start(struct node *n)
{
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 cout<<"Enter Data : ";
 cin>>newnode->data;
newnode->next=n;
return newnode;
}
struct node* middle(struct node *n)
{
int temp;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
 cout<<"Enter Data : ";
 cin>>newnode->data;
 cout<<"\nAfter ? ";
 cin>>temp;
 struct node *t=n;
 while(t->data!=temp)
 t=t->next;
 newnode->next=t->next;
 t->next=newnode;
 return n;
 };
 struct node *e(struct node *n)
 {
 struct node *t=n;
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 cout<<"Enter Data : ";
 cin>>newnode->data;
 newnode->next=NULL;
 while(t->next!=NULL)
 t=t->next;
 t->next=newnode;
 return n;
 };
 struct node *delete1(struct node *n)
 {
     int temp;
     struct node* prev=n;
     struct node* t=prev->next;
     cout<<"Enter the Value to delete : ";
     cin>>temp;
     while(t->data!=temp)
     {
         prev=prev->next;
         t=t->next;
     }
     prev->next=t->next;
     t->next=NULL;
     free(t);
     return n;
 };
int main()
{
    int choice;
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter Head Data : ";
    cin>>head->data;
    head->next=NULL;
    cout<<"Menu"<<endl<<"1.Start"<<endl<<"2.Middle"<<endl<<"3.End"<<endl<<"4.Delete(BY VALUE)"<<endl<<"5.Exit"<<endl;
    cin>>choice;
    while(choice!=5)
    {
        switch(choice)
        {
            case 1 : head=start(head);
                     cout<<"\n";
                     printlinkedlist(head);
                     break;
           case 2 : head=middle(head);
                    cout<<"\n";
                    printlinkedlist(head);
                    break;
            case 3 : head=e(head);
                     cout<<"\n";
                    printlinkedlist(head);
                     break;
           case 4 : head=delete1(head);
                     cout<<"\n";
                    printlinkedlist(head);
                     break;
            default : cout<<"ADINGOYYALLAAA"<<endl;
        }
        cout<<"\nEnter Choice ";
        cin>>choice;
    }
    return 0;
}
