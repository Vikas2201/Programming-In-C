/* diameter of binary tree is defined as number of nodes in the longest path between any 2 leaves */


/* Time Complexity of this method :- O(n^2) */
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

int cal_height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int lheight = cal_height(root->left);
        int rheight = cal_height(root->right);

        return max(lheight , rheight) + 1;
    }
}

int diameter_of_tree(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int lheight = cal_height(root->left);
        int rheight = cal_height(root->right);

        int curr_diameter = lheight + rheight + 1;

        int ldiameter = diameter_of_tree(root->left);
        int rdiameter = diameter_of_tree(root->right);

        return max(curr_diameter,max(ldiameter,rdiameter));
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
     
    cout << "Diameter of tree is " <<diameter_of_tree(root);
    return 0;
}