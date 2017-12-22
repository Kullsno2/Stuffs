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
struct node* findlca(struct node *root,int key1,int key2)
{
if(root==NULL)
    return NULL;
if(key1<root->key && key2<root->key)
    return findlca(root->left,key1,key2);
if(key1>root->key && key2>root->key)
    return findlca(root->right,key1,key2);
return root;

}
int main()
{
int key1=0,key2=0;
struct node *lca=NULL;
struct node *root        = newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);
cout<<"Enter Key 1 : ";
cin>>key1;
cout<<"Enter Key 2 : ";
cin>>key2;
lca=findlca(root,key1,key2);
if(lca!=NULL)
cout<<"The LCA is "<<lca->key<<endl;
else
cout<<"NO LCA"<<endl;
return 0;
}
