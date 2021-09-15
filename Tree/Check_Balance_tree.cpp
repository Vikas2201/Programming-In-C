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
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh) + 1;
}

bool isbalance(node* root)
{
    if(root == NULL)
    {
        return true;
    }
    if(isbalance(root->left) == false)
    {
        return false;
    }
    if(isbalance(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}