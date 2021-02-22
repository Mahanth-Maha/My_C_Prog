#include <stdio.h>
#include <stdlib.h>
int *arr;
int n,top=-1;

void push(void);
int pop(void);
int peek(void);
void traverse(void);

int main()
{
    int c,k;
    printf("Stack\n");
    printf("Enter max size of Stack Required :");
    scanf("%d",&n);
    arr = (int *)calloc(n,sizeof(int));
    while(1)
    {
        printf("\nStack Operations Availiable\n1.push\n2.pop\n3.peek\n4.traverse\n0.EXIT\nEnter the Index : ");
        scanf("%d",&c);
        switch(c){
            case 1:push();
                    break;
            case 2:((k=pop())!=-1)?printf("\nItem Popped : %d\n",k):printf("\nStack UnderFlow\n");
                    break;
            case 3:((k=peek())!=-1)?printf("\nItem At Peek : %d\n",k):printf("\nStack UnderFlow\n");
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
    if(top!=n-1){
        printf("\nEnter Data to Push : ");
        scanf("%d",arr+(++top));
    }
    else
        printf("\nStack Over Flow\n");
}

int pop(void)
{
    if(top == -1)
        return top;
    return *(arr+top--);
}

int peek(void)
{
    if(top == -1)
        return top;
    return *(arr+top);
}

void traverse(void)
{
    int i=top;
    if(top!=-1)
    {
        printf("Data in Stack\n");
        while(i>=0)
            printf("\t%d\n",*(arr+i--));
    }
    else printf("\n\tStack UnderFlow\n");
}
