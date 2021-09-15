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

int cal_diameter(node* root, int* height)
{
    if(root == NULL)
    {
        *height = 0;
        return 0;
    }
    else
    {
        int left_height = 0;
        int right_height = 0;
        int ldiameter = cal_diameter(root->left,&left_height);
        int rdiameter = cal_diameter(root->right,&right_height);

        int curr_diameter = left_height + right_height + 1;
        *height = max(left_height,right_height) + 1;

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
     
    int height = 0;
    cout << "Diameter of tree is " <<cal_diameter(root,&height);
    return 0;
}