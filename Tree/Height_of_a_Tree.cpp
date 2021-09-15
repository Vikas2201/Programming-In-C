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

int height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);

    return max(lheight,rheight) + 1;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
     
    cout << "Height of tree is " << height(root);
    return 0;
}