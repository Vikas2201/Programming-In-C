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

void display(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
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
                cout<<"\nOUR BINARY TREE : ";
                display(root);
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