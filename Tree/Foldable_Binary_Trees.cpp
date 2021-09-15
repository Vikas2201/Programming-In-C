/* A tree can be folded if left and right subtrees of the tree are structure wise mirror image of each other. 
An empty tree is considered as foldable.  */

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

bool folded(node* n1, node* n2)
{
    if(n1 == NULL && n2 == NULL)
    {
        return true;
    }
    else if(n1 == NULL || n2 == NULL)
    {
        return false;
    }
    else
    {
        return folded(n1->left,n2->right) && folded(n1->right,n2->left);
    }
}

bool foldable(node* root)
{
    if(root == NULL)
    {
        return true;
    }
    else
    {
        return folded(root->left,root->right);
    }
}

int main()
{
    /* The constructed binary tree is
        1
        / \
        2 3
        \ /
        4 5
    */
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(5);
 
    if (foldable(root)) 
    {
        cout << "Tree is foldable";
    }
    else 
    {
        cout << "Tree is not foldable";
    }
 
    return 0;
}