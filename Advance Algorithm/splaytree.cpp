#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left , *right ;
};
struct node *root;
struct node *rightRotate(struct node *X)
{
	struct node *Y;
	Y=X->left;
	X->left=Y->right;
	Y->right=X;
	return Y;
}
struct node *leftRotate(struct node *X)
{
	struct node *Y;
	Y=X->right;
	X->right=Y->left;
	Y->left=X;
	return Y;
}
struct node *create(int value)
{
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
    node->data=value;
	node->left=NULL;
	node->right=NULL; 
    return node;
}
struct node *splay(struct node *root , int key)
{ 
    if (root == NULL || root->data == key) 
    {
	   return root; 
    }
    if (root->data > key) 
    {  
        if (root->left == NULL) 
		{
		    return root;
		}
        else if (root->left->data > key) 
        {  
            root->left->left = splay(root->left->left, key);  
            root = rightRotate(root); 
        } 
        else if (root->left->data < key)  
        {  
            root->left->right = splay(root->left->right, key);  
            if (root->left->right != NULL) 
            {
                root->left = leftRotate(root->left); 
            }
		}  
		else if (root->left == NULL)
        {
		    return root ; 
        }
        else
        {
        	return rightRotate(root);
		}
	} 
    else  
    { 
        if (root->right == NULL)
		{
		   return root; 
        } 
        if (root->right->data > key) 
        {  
            root->right->left = splay(root->right->left, key);  
            if (root->right->left != NULL) 
            {
                root->right = rightRotate(root->right); 
            }
        }
        else if (root->right->data < key) 
        {  
            root->right->right = splay(root->right->right, key); 
            root = leftRotate(root); 
        } 
        if (root->right == NULL)
        {
            return root; 
        }
        else
        {
        	return leftRotate(root);
		}
	}
}
struct node *insert(struct node *root, int k) 
{  
    if (root == NULL) 
	{
	    return create(k); 
	}
    root = splay(root, k);
	if (root->data == k) 
	{
        return root; 
    }
    struct node *newnode  = create(k); 
    if (root->data > k) 
    { 
        newnode->right = root; 
        newnode->left = root->left; 
        root->left = NULL; 
    } 
    else
    { 
        newnode->left = root; 
        newnode->right = root->right; 
        root->right = NULL; 
    } 
    return newnode;  
}
struct node *Delete(struct node *root, int key) 
{ 
    struct node *temp;
	if(root==NULL)
	{
		return NULL ;
	} 
    root = splay(root, key); 
    if (key != root->data) 
    {
	    return root; 
    }
	else if (root->left == NULL) 
    { 
        temp = root; 
        root = root->right; 
    } 
    else
    { 
        temp = root; 
        root = splay(root->left, key); 
        root->right = temp->right; 
    } 
    delete(temp); 
    return root; 
      
}
struct node *search(struct node *root , int key)
{
	return splay(root, key);
}
void inorder(struct node *root)
{
	if(root==NULL)
	{
		return ;
	}
	inorder(root->left);
	printf("%d  ",root->data);
	inorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
	{
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d  ",root->data);
	
}
void preorder(struct node *root)
{
	if(root==NULL)
	{
		return ;
	}
	printf("%d  ",root->data);
	preorder(root->left);
	preorder(root->right);	
}
int main()
{
	struct node *node;
	int choice,value,ele,n,i;
	while(1)
	{
		printf("\n");
		printf("\nOUR OPTION WILL BE:");
		printf("\n1. CREATE A SPLAY TREE TREE ");
		printf("\n2. INSERATION IN SPLAY TREE");
		printf("\n3. DELETION IN SPLAY TREE");
		printf("\n4. SEARCHING IN SPLAY TREE");
		printf("\n5. INORDER TRAVERSAL IN SPLAY TREE");
		printf("\n6. POSTORDER TRAVERSAL IN SPLAY TREE");
		printf("\n7. PREORDER TRAVERSAL IN SPLAY TREE");
		printf("\n8. EXIT");
		printf("\nENTER OUR CHOICE : ");                  
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
			    printf("\nENTER NUMBER OF ELEMENTS : ");
				scanf("%d",&n);
				printf("\nENTER TREE DATA : ");
				for(i=0;i<n;i++)
				{
					scanf("%d",&value);
					root=insert(root,value);
				}
				getch();
				break;
			}
			case 2:
			{
				printf("\nENTER VALUE FOR INSERATION : ");
				scanf("%d",&value);
				node=create(value);
				root=insert(root,value);
				getch();
				break;
			}	
			case 3:
			{
				printf("\nENTER VALUE FOR DELETION : ");
				scanf("%d",&value);
				root=Delete(root,value);
				getch();
				break;
			}
			case 4:
			{
				printf("\nENTER VALUE FOR SEARCHING : ");
				scanf("%d",&value);
				root=search(root,value);
				getch();
				break;
			}
            case 5:
			{
				inorder(root);
				getch();
				break;
			}
			case 6:
			{
			    postorder(root);
				getch();
				break;
			}	
			case 7:
			{
				preorder(root);
				getch();
				break;
			}	
			case 8:
			{
				exit(1);
				break;
			}
			default:
			{
				printf("\nENTER CORRECT CHOICE:");
				getch();
				break;
			}
		}
	}
}
