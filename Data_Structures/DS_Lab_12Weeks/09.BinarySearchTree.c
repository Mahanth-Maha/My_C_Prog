#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
}*root=NULL;

void insert(int);

void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);

struct node* extract_max(struct node* );
struct node* extract_min(struct node* );
void del_node(int );

int main()
{
    int p,d;
    struct node * n;
    printf("Binary Search Trees\n");
    while(1)
    {
        printf("\nBST - Options Avaliable\n0.EXIT\n\n1.Add Data\n2.Inorder - Display\n3.Pre-order - Display\n4.Post-order - Display\n5.Delete Data\nEnter Value :");
        scanf("%d",&p);
        switch(p)
        {
            case 0:exit(1);
            case 1:printf("Enter the Data : ");
                    scanf("%d",&d);
                    insert(d);
                    break;
            case 2:n = root;
                    printf("Inorder Of BST :\n");
                    (n!=NULL)?inorder(n):printf("No Data in BST\n");
                    break;
            case 3:n = root;
                    printf("\nPreorder Of BST :\n");
                    (n!=NULL)?preorder(n):printf("No Data in BST\n");
                    break;
            case 4:n = root;
                    printf("\nPostorder Of BST :\n");
                    (n!=NULL)?postorder(n):printf("No Data in BST\n");
                    break;
            case 5:printf("\nEnter Element to Delete in BST : ");
                    scanf("%d",&d);
                    del_node(d);
                    break;
            default:printf("\n\aInvalid Input\n");
        }
    }
    return 0;
}
void insert(int d)
{
    struct node* t = (struct node*)malloc(sizeof(struct node)),*p = root;
    t->left = t->right =NULL;
    t->data = d;
    if(!p)
        root = t;
    else
    {
        while(1)
        {
            if(p->data > t->data)
            {
                if(p->left != NULL)
                    p = p->left;
                else
                {
                    p->left = t;
                    break;
                }
            }
            if(p->data <= t->data)
            {
                if(p->right != NULL)
                    p = p->right;
                else
                {
                    p->right = t;
                    break;
                }
            }
        }

    }
}
void inorder(struct node* p)
{
    if(p)
    {
        inorder(p->left);
        printf("%d \t ",p->data);
        inorder(p->right);
    }
}
void preorder(struct node* p)
{
    if(p)
    {
        printf("%d \t ",p->data);
        preorder(p->left);
        preorder(p->right);
    }
}
void postorder(struct node* p)
{
    if(p)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d \t ",p->data);
    }
}
struct node* extract_max(struct node* k)
{
    struct node *l;
    if(k->right == NULL)
		return k;
    else
    {
        while(k->right->right)
            k = k->right;			
	l = k->right;
        k->right =(l->left==NULL)?NULL:l->left;
        return l;
    }

}
struct node* extract_min(struct node* k)
{
    struct node *l;
    if(k->left == NULL)
        return k;
    else
    {
        while(k->left->left)
	    k = k->left;
        l = k->left;
        k->left =(l->right==NULL)?NULL:l->right;
		return l;
    }
}
void del_node(int d)
{
    struct node *parent =root,*p=root,*cur;
    if(root == NULL)
       printf("\nNo elements in Tree to Delete \n");
    else if(p->data != d)
    {
        while(p)
        {
            if(p->data > d)
            {
                parent = p;
                p = p->left;
            }
            else if(p->data <d)
            {
                parent = p;
                p = p->right;
            }
            else if(p->data == d)
                break;
        }
        if(p)
        {
            //finding Cur correct node to replace the req delete node if no left go right if no right cur = null
            if(p->left)
            {
                cur = extract_max(p->left);
                if(cur == p->left)
                    p->left = (cur->left != NULL)?cur->left:NULL;
            }
            else if(p->right)
            {
                cur = extract_min(p->right);
                if(cur == p->right)
                    p->right = (cur->right != NULL)?cur->right:NULL;
            }
            else
                cur = NULL;
            // replace only data
            if(cur)
                p->data = cur->data;
            else
            {
                if(parent->left == p)parent->left =NULL;
                else parent->right = NULL;
            }
            free(cur);
        }
        else
            printf("\n No Such Element to Delete\n");
    }
    else
    {
        //delete root data
        if(p->left)
        {
            cur = extract_max(p->left);
            if(cur == p->left)
                    p->left = (cur->left != NULL)?cur->left:NULL;
            root->data = cur->data;
            free(cur);
        }
        else if(p->right)
        {
            cur = extract_min(p->right);
            if(cur == p->right)
                    p->right = (cur->right != NULL)?cur->right:NULL;
            root->data = cur->data;
            free(cur);
        }
        else
            root = NULL;
    }
}
