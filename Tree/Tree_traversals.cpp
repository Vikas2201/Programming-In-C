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

node* create()
{
    int value;
    cout<<"\nENTER VALUE FOR INSERTION IN TREE(ENTER -1 FOR NO NODE) : ";
    cin>>value;
    if(value == -1)
    {
        return NULL;
    }
    node* n = new node(value);
    cout<<"\nENTER LEFT CHILD NODE VALUE OF "<<value<<" :";
    n->left = create();
    cout<<"\nENTER RIGHT CHILD NODE VALUE OF "<<value<<" :";
    n->right = create();

    return n;
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    int choice;
    node* root = NULL;
    while(1)
    {
        cout<<"\nOUR CHOICES ARE : ";
        cout<<"\n1. CREATE A BINARY TREE";
        cout<<"\n2. DISPLAY A BINARY TREE";
        cout<<"\n3. EXIT";
        cout<<"\nENTER YOUR CHOICE : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                root = create();
                break;
            }
            case 2:
            {
                cout<<"\nPRE ORDER TRAVERSAL OF OUR BINARY TREE : ";
                preorder(root);
                cout<<"\nPOST ORDER TRAVERSAL OF OUR BINARY TREE : ";
                postorder(root);
                cout<<"\nIN ORDER TRAVERSAL OF OUR BINARY TREE : ";
                inorder(root);
                break;
            }
            case 3:
            {
                exit(1);
                break;
            }
            default:
            {
                cout<<"\nENTER CORRECT CHOICE";
                break;
            }
        }
    }
    return 0;
}