#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
}*root = NULL;

void enqueue(void);
int dequeue(void);
int peek(void);
void traverse(void);

int main()
{
    int c,k;
    while(1)
    {
        printf("\nQueue Operations Availiable\n1.enqueue\n2.dequeue\n3.peek\n4.traverse\n0.EXIT\nEnter the Index : ");
        scanf("%d",&c);
        switch(c){
            case 1:enqueue();
                    break;
            case 2:((k=dequeue())!=-1)?printf("\nItem Popped : %d\n",k):printf("\n\tQueue Empty\n");
                    break;
            case 3:((k=peek())!=-1)?printf("\nFirst Element in Queue : %d\n",k):printf("\n\tQueue Empty\n");
                    break;
            case 4:traverse();
                    break;
            case 0:exit(0);
            default:printf("\n Invalid Input\n");
        }
    }
    return 0;
}
void enqueue(void)
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
        printf("\n\tQueue Over Flow\n");
}
int dequeue(void)
{
    int k;
    struct node *p=root,*q;
    if(p)
    {
        if(p->link)
        {
            while(p->link->link)
            p=p->link;
            q = p->link;
            k = q->data;
            p->link = NULL;
            free(q);
        }
        else
        {
            k = p->data;
            root = NULL;
            free(p);
        }
        return k;
    }
    return -1;
}
int peek(void)
{
    int k;
    struct node *p = root;
    if(p)
    {
        while(p->link){
            p=p->link;
        }
        k = p->data;
        return k;
    }
    return -1;
}
void traverse(void)
{
    struct node *p=root;
    if(p)
    {
        printf("\nData in Queue\nIN\t");
        while(p)
        {
            printf("%d\t",p->data);
            p = p->link;
        }
        printf("OUT\n");
    }
    else
        printf("\n\tQueue Empty\n");
}
