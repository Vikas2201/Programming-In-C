/* This problem can be solved using two stacks. 
Assume the two stacks are current: currentlevel and nextlevel. 
We would also need a variable to keep track of the current level order(whether it is left to right or right to left). 
We pop from the currentlevel stack and print the nodes value. Whenever the current level order is from left to right, 
push the nodes left child, then its right child to the stack nextlevel. Since a stack is a LIFO(Last-In-First_out) structure,
next time when nodes are popped off nextlevel, it will be in the reverse order. On the other hand,
when the current level order is from right to left, we would push the nodes right child first, then its left child. 
Finally, do-not forget to swap those two stacks at the end of each level */

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

void zigzag(node* root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        stack<node*> s;
        stack<node*> t;
        s.push(root);
        bool left = true;
        while(!s.empty())
        {
            node* temp = s.top();
            s.pop();

            if(temp)
            {
                cout<<temp->data<<" ";

                if(left)
                {
                    if(temp->left)
                    {
                        t.push(temp->left);
                    }
                    if(temp->right)
                    {
                        t.push(temp->right);
                    }
                }
                else
                {
                    if(temp->right)
                    {
                        t.push(temp->right);
                    }
                    if(temp->left)
                    {
                        t.push(temp->left);
                    }
                }
            }
            if(s.empty())
            {
                left = !left;
                swap(s,t);
            }
        }
    }
}

int main()
{
    // create tree
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(4);
    cout << "ZigZag Order traversal of binary tree is : "<<zigzag(root);
 
    return 0;
}