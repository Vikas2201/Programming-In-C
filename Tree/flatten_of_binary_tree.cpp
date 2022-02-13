/* Given a binary tree, flatten it into linked list in place. After flattening, 
left of each node should point to NULL and right should contain next node in preorder sequence.

(It's NOT allowed to use other data structures) */

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

void flatten(node* root)
{
    if(root == NULL || (root->left == NULL && root->right == NULL))
    {
        return ;
    }

    if(root->left != NULL)
    {
        flatten(root->left);
        node* temp = root->right;
        root->right = root->left;
        root->left = NULL;    

        node* t = root->right;
        while(t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}

void inordertraversal(node* root)
{
    if(root == NULL)
    {
        return;
    }

    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
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

   flatten(root);
   inordertraversal(root);
   return 0;
}
