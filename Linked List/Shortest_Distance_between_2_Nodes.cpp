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
            left =  NULL;
            right = NULL;
        }
};

node* LCA(node* root,int n1 , int n2)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == n1 || root->data == n2)
    {
        return root;
    }

    node* Left = LCA(root->left,n1,n2);
    node* Right = LCA(root->right,n1,n2);

    if(Left == NULL && Right == NULL)
    {
        return NULL;
    } 
    if(Left != NULL && Right != NULL)
    {
        return root;
    }
    if(Left != NULL)
    {
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
}

int dist(node* root,int n , int d)
{
    if(root == NULL)
    {
        return -1;
    }
    if(root->data == n)
    {
        return d;
    }
    
    int left = dist(root->left,n,d+1);
    if(left != -1)
    {
        return left;
    }

    int right = dist(root->right,n,d+1);
    if(right != -1)
    {
        return right;
    }
}

int DB2N(node* root ,int n1,int n2)
{
    node* lca = LCA(root,n1,n2);

    int d1 = dist(lca,n1,0);
    int d2 = dist(lca,n2,0);

    return d1+d2;
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    /*          1
               / \
              2   3
             / \ / \
            4  5 6  7
    */

   cout<<"Distance between 4 and 6 : "<<DB2N(root,4,6);
   return 0;


    return 0;
}
