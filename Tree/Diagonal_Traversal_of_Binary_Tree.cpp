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

void diagonalprint(node* root , int i , map<int ,vector<int>> &values)
{
    if(root == NULL)
    {
        return ;
    }
    values[i].push_back(root->data);
    diagonalprint(root->left,i+1,values);
    diagonalprint(root->right,i,values);
}

void print_diagonal(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    else
    {
        map<int,vector<int>> values;
        diagonalprint(root,0,values);

        cout<<"\nDIAGONAL TRAVERSAL OF TREE : ";
        for(auto i: values)
        {
            vector<int> v = i.second;
            for(auto j: v)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    node* root = new node(8);
    root->left = new node(3);
    root->right = new node(10);
    root->left->left = new node(1);
    root->left->right = new node(6);
    root->right->right = new node(14);
    root->right->right->left = new node(13);
    root->left->right->left = new node(4);
    root->left->right->right = new node(7);

    print_diagonal(root);
    return 0;    
}