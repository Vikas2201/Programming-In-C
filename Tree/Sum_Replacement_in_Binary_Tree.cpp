/* Sum Replacement means replace the value of each node with the sum of all the subtree nodes and itself */ 

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

void sum_replacement(node* root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        sum_replacement(root->left);
        sum_replacement(root->right);

        if(root->left != NULL)
        {
            root->data += root->left->data;
        }
        if(root->right != NULL)
        {
            root->data += root->right->data;
        }
    }
}

void traversal(node* root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        traversal(root->left);
        traversal(root->right);
        cout<<root->data<<" ";
    }
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
    

    cout << "Our Tree :  ";
    traversal(root);

    cout<<"\nTREE AFTER PERFORM SUM REPLACEMENT ALGO : ";
    sum_replacement(root);
    traversal(root);
    return 0;
}