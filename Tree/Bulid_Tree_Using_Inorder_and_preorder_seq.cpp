#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

        node(int value)
        {
            data = value;
            left = NULL;
            right = NULL;
        }
};

int search(int inorder[],int start , int end , int ele)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i] == ele)
        {
            return i;
        }
    }
    return -1;
}

node* bulidtree(int preorder[] , int inorder[] , int start , int end)
{
    static int idx = 0;
    if(start > end)
    {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    node* n = new node(curr);
    if(start == end)
    {
        return n;
    }
    int pos = search(inorder,start,end,curr);
    n->left = bulidtree(preorder,inorder,start,pos-1);
    n->right = bulidtree(preorder,inorder,pos+1,end);
}

void inorder_print(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder_print(root->left);
    cout<<root->data<<" ";
    inorder_print(root->right);
}

int main()
{
    int n;
    cout<<"\nENTER NUMBER OF NODES : ";
    cin>>n;

    int preorder[n],inorder[n];
    cout<<"\nENTER PREORDER SEQUENCE : ";
    for(int i=0;i<n;i++)
    {
        cin>>preorder[i];
    }

    cout<<"\nENTER INORDER SEQUENCE : ";
    for(int i=0;i<n;i++)
    {
        cin>>inorder[i];
    }

    node* root = bulidtree(preorder,inorder,0,n-1);
    cout<<"INORDER TRAVERSAL OF BUILD TREE : ";
    inorder_print(root);
    return 0;
}
