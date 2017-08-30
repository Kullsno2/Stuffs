#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node* left;
    struct node* right;
};
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->key);
        inorder(root->right);
    }
}
struct node* search(struct node* root,int key)
{
 if(root==NULL || root->key==key)
        return root;
 if(key < root->key)
    return search(root->left,key);
 else
    return search(root->right,key);
}
struct node *newNode(int key)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
struct node *minValueNode(struct node *node)
{
    struct node *current=node;
    while(current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}
struct node *insert(struct node* root,int key)
{
    if(root==NULL)
        return newNode(key);
    if(key>root->key)
        root->right=insert(root->right,key);
    else if(key<root->key)
        root->left=insert(root->left,key);
    return root;
};
struct node *deleteNode(struct node* root,int key)
{
    if(root==NULL)
        return root;
    if(key < root->key)
        root->left=deleteNode(root->left,key);
    else if(key > root->key)
        root->right=deleteNode(root->right,key);
    else
    {
    if(root->right==NULL)
      {
          struct node* temp=root->left;
          free(root);
          return temp;
      }
    else if(root->left==NULL)
    {
        struct node* temp=root->right;
        free(root);
        return temp;
    }
    struct node* temp=minValueNode(root->right);
    root->key=temp->key;
    root->right=deleteNode(root->right,temp->key);
    }
    return root;
};
int main()
{
int choice=0,key=0;
struct node *root=NULL;
struct node *node=NULL;
do
{
cout<<"\nMENU";
cout<<"\n1.INSERT";
cout<<"\n2.INORDER";
cout<<"\n3.SEARCH";
cout<<"\n4.DELETE";
cout<<"\n5.EXIT";
cout<<"\nENTER CHOICE :";
cin>>choice;
switch(choice)
{
case 1 :cout<<"\nEnter data : ";
        cin>>key;
        root=insert(root,key);
        break;
case 2 :inorder(root);
        break;
case 3 :cout<<"\nEnter data : ";
        cin>>key;
        node=search(root,key);
        if(node!=NULL)
            cout<<"\nTHE DATA IS PRESENT";
        else
            cout<<"\nNOT PRESENT";
        break;
case 4 :cout<<"\nEnter data : ";
        cin>>key;
        root=deleteNode(root,key);
        break;
}
}while(choice!=5);
return 0;
}
