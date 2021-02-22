#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * link;
}*root = NULL;

void push(void);
int pop(void);
int peek(void);
void traverse(void);

int main()
{
    int c,k;
    while(1)
    {
        printf("\nStack Operations Availiable\n1.push\n2.pop\n3.peek\n4.traverse\n0.EXIT\nEnter the Index : ");
        scanf("%d",&c);
        switch(c){
            case 1:push();
                    break;
            case 2:((k=pop())!=-1)?printf("\nItem Popped : %d\n",k):printf("\n\tStack UnderFlow\n");
                    break;
            case 3:((k=peek())!=-1)?printf("\nTop Element in Stack : %d\n",k):printf("\n\tStack UnderFlow\n");
                    break;
            case 4:traverse();
                    break;
            case 0:exit(0);
            default:printf("\n Invalid Input\n");
        }
    }
    return 0;
}


void push(void)
{
    struct node * t = (struct node *)malloc(sizeof(struct node)),*p = root;
    t->link = NULL;
    if(t){
        printf("\nEnter Data to Push : ");
        scanf("%d",&t->data);
        if(p)
            t->link = root;
        root = t;
    }
    else
        printf("\n\tStack Over Flow\n");
}

int pop(void)
{
    int k;
    struct node *p =root;
    if(!p)
        return -1;
    root = root->link;
    k = p->data;
    free(p);
    return k;
}
int peek(void)
{
    if(!root)
        return -1;
    return root->data;
}
void traverse(void)
{
    struct node *p =root;
    if(p)
    {
        printf("Data in Stack\n");
        while(p)
        {
            printf("\t%d\n",p->data);
            p=p->link;
        }
    }
    else printf("\n\tStack UnderFlow\n");
}



