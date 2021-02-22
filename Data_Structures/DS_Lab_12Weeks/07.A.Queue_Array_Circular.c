#include <stdio.h>
#include <stdlib.h>

int *Q,n,rear=0,front=0;

void enq(void);
int deq(void);
int peek(void);
void Traverse(void);

int main()
{
    int k,c;
    printf("Circular - Q - Array\n");
    printf("Enter Size value of Queue required\n");
    scanf("%d",&n);
    n= n+1;
    Q = (int *)calloc(n,sizeof(int));

    while(1)
    {
        printf("\nCircular Queue Operations :\n0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Traverse\nEnter Value : ");
        scanf("%d",&c);
        switch(c)
        {
            case 0 : exit(1);break;
            case 1 : enq();break;
            case 2 : ((k=deq()) == -1)?printf("\nQ is Empty\n"):printf("\nPopped %d\n",k);break;
            case 3 : ((k=peek()) == -1)?printf("\nQ is Empty\n"):printf("\nPeek Value : %d\n",k);break;
	    case 4 : Traverse();break;
            default: printf("Invalid Input");
        }
    }
    return 0;
}

void enq(void)
{
    rear = (rear + 1) % n;
    if(rear == front)
    {
        printf("Q is FULL\n");
        rear = (rear == 0)?n-1:rear-1;
    }
    else
    {
        printf("Enter Data to Insert : ");
        scanf("%d",Q+rear);
    }
}
int deq(void)
{
    if(rear == front)
        return -1;
    else
    {
        front = (front+1)%n;
        return *(Q+front);
    }
}
int peek(void)
{
    int k;
    k = (front+1)%n;
    if(rear == front)
	return -1;
    return *(Q+k);
}
void Traverse(void)
{
    int i=front;
    if(rear != front)
    {
        printf("\nOUT\t");
        while(i!=rear)
        {
            i = (i+1)%n;
            printf("%d\t",*(Q+i));
        }
        printf("IN\n");
    }
    else
        printf("\nQ is Empty\n");
}
