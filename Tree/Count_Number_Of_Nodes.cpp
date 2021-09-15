#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* left = NULL;
        node* right = NULL;

        node(int value)
        {
            data = value;
            left = NULL;
            right = NULL;
        }
};

int count_node(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return count_node(root->left) + count_node(root->right) + 1;
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

    cout<<"\nNUMBER OF LEVEL OF NODES : "<<count_node(root);
    return 0;
}