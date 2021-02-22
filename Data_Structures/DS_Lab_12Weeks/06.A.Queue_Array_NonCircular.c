#include <stdio.h>
#include <stdlib.h>

int *Q,n,rear=0;

void enq(void);
int deq(void);
int peek(void);
void Traverse(void);


int main()
{
    int k,c;
    printf("Non - Circular - Q - Array\n");
    printf("Enter Size value of Queue required\n");
    scanf("%d",&n);
    Q = (int *)calloc(n,sizeof(int));
    while(1)
    {
        printf("\nNon - Circular Queue Operations :\n0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Traverse\nEnter Value : ");
        scanf("%d",&c);
        switch(c)
        {
            case 0 : exit(1);break;
            case 1 : enq();break;
            case 2 : ((k=deq()) == -1)?printf("\nQ is Empty\n"):printf("\nPopped %d\n",k);break;
            case 3 : ((k=peek()) == -1)?printf("\nQ is Empty\n"):printf("\nPeek Value %d\n",k);break;
	    case 4 : Traverse();break;
            default: printf("Invalid Input");
        }
    }
    return 0;
}

void enq(void)
{
    if(rear == n)
        printf("Q is FULL\n");
    else
    {
        printf("Enter Data to Insert : ");
        scanf("%d",Q+rear++);
    }
}

int deq(void)
{
    int i,k;
    if(rear == 0)
        return -1;
    else
    {
        i=Q[0];
        for(k=0;k<rear;k++)
        {
            Q[k]=Q[k+1];
        }
        rear--;
        return i;
    }
}

int peek(void)
{
    if(rear == 0)
        return -1;
    return Q[0];
}

void Traverse(void)
{
    int k;
    if(rear != 0)
    {
        printf("\nOUT\t");
        for(k=0;k<rear;k++)
        {
            printf("%d\t",*(Q+k));
        }
        printf("IN\n");
    }
    else
        printf("\nQ is Empty\n");
}
