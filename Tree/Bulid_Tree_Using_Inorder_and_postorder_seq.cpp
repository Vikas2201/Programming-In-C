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

node* bulidtree(int postorder[], int inorder[], int start , int end)
{
    if(start > end)
    {
        return NULL;
    }
    
    static int idx = end;
    int curr = postorder[idx];
    idx--;
    node* n = new node(curr);
    if(start == end)
    {
        return n;
    }
    int pos = search(inorder,start,end,curr);
    n->right = bulidtree(postorder,inorder,pos+1,end);
    n->left = bulidtree(postorder,inorder,start,pos-1);
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

    int postorder[n],inorder[n];
    cout<<"\nENTER POST ORDER SEQUENCE : ";
    for(int i=0;i<n;i++)
    {
        cin>>postorder[i];
    }

    cout<<"\nENTER IN ORDER SEQUENCE : ";
    for(int i=0;i<n;i++)
    {
        cin>>inorder[i];
    }

    node* root = bulidtree(postorder,inorder,0,n-1);
    cout<<"INORDER TRAVERSAL OF BUILD TREE : ";
    inorder_print(root);
    return 0;
}
