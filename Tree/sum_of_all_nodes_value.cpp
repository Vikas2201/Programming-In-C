#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data ;
        node* left;
        node* right;

        node(int value)
        {
            data = value;
            left = NULL;
            right = NULL;
        }
};

int sum_of_nodes(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return sum_of_nodes(root->left) + sum_of_nodes(root->left) + root->data;
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

    cout<<"\nSUM OF ALL NODES DATA IN TREE : "<<sum_of_nodes(root);
    return 0;
}