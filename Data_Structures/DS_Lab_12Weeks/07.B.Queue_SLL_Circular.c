#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *front = NULL,*rear = NULL;

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
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->link = NULL;
    printf("Enter the node data : ");
    scanf("%d",&temp->data);
    if(front==NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = rear->link;
    }
}

int dequeue(void)
{
    struct node *p = front;
    if(p)
    {
        int d = p->data;
        front = p->link;
        free(p);
        return d;
    }
    return -1;
}

int peek(void)
{
    if(front)
        return front->data;
    return -1;
}

void traverse(void)
{
    struct node *p = front;
    if(p)
    {
        printf("\nQueue\nIN\t");
        while(p)
        {
            printf("%d\t",p->data);
            p = p->link;
        }
        printf("OUT\n");
    }
    else
        printf("\nQueue is Empty\n");
}
