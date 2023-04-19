/* Longest path length in BST */

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node *left , *right;

        node(int value)
        {
            data = value;
            left = NULL;
            right = NULL;
        }
};

node* create_tree(node* root,int value)
{
    if(root == NULL)
        root = new node(value);
    else if(value > root->data)
        root->right = create_tree(root->right,value);
    else
        root->left = create_tree(root->left,value);
    return root;
}

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

void display_tree(node* root)
{
    if(root != NULL)
    {
        display_tree(root->left);
        cout<<root->data<<" ";
        display_tree(root->right);
    }
}

int main()
{
    int n;
    cout<<"how much nodes in your given tree : ";
    cin>>n;

    int arr[n];
    cout<<"Enter value of nodes : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    node* root = NULL;
    for(int i=0;i<n;i++)
        root = create_tree(root,arr[i]);
    
    cout<<"Our tree : ";
    display_tree(root); 

    cout<<"\nLongest path length in BST : "<<diameter_of_tree(root);

    return 0;
}