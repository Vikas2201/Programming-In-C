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

void inorder_traversal(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    else
    {
        queue<node* > q;
        q.push(root);
        while(!q.empty())
        {
            node* temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
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

    cout<<"\nINORDER TRAVERSAL : ";
    inorder_traversal(root);
    return 0;
}