#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node* left;
    struct node* right;
};
struct node *newNode(int key)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
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
void findPreSuc(struct node *root,struct node **pre,struct node **suc,int key)
{
if(root==NULL)
return;
if(key==root->key)
{
    if(root->left!=NULL)
    {
        struct node*temp=root->left;
        while(temp->right!=NULL)
        temp=temp->right;
        *pre=temp;
    }
    if(root->right!=NULL)
    {
        struct node*temp=root->right;
        while(temp->left!=NULL)
        temp=temp->left;
        *suc=temp;
    }
}
else if(key<root->key)
{
    *suc=root;
    findPreSuc(root->left,pre,suc,key);
}
else
{
    *pre=root;
    findPreSuc(root->right,pre,suc,key);
}
}
int main()
{
int key=0;
struct node *root=NULL;
struct node *pre=NULL;
struct node *suc=NULL;
root=insert(root,1);
root=insert(root,2);
root=insert(root,3);
root=insert(root,4);
root=insert(root,5);
cout<<"Enter Key ";
cin>>key;
findPreSuc(root,&pre,&suc,key);
if(pre!=NULL)
cout<<"The Inorder Predecessor is "<<pre->key<<endl;
else
cout<<"NO INORDER PREDECESSOR"<<endl;
if(suc!=NULL)
cout<<"The Inorder Successor is "<<suc->key<<endl;
else
cout<<"NO INORDER SUCCESSOR"<<endl;
return 0;
}
