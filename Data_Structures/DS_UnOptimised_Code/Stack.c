#include <stdio.h>
#define CAP 5

int stack[CAP];
int top=-1;

void push(int ele)
{
   if(isFull())
   {
    printf("Stack Overflow\n");
   }
   else
   {
     top++;
     stack[top]=ele;
     printf("%d inserted\n",ele);
   }
}

int isFull(void)
{
   if(top==CAP)
   {
     return 1;
   }
   else
   {
     return 0;
   }
}
int pop(void)
{
   int p;
   if(isEmpty())
   {
     printf("Stack Underflow\n");
     return 0;
   }
   else
   {
     p=stack[top];
     stack[top] = 0;
     top--;
     return p;
   }
}
int isEmpty(void)
{
   if(top==-1)
   {
     return 1;
   }
   else
   {
     return 0;
   }
}
void transverse(void)
{
   int i;
   if(isEmpty())
   {
     printf("Stack Underflow\n");
   }
   else
   {
     printf("Stack Elements are :\n");
     for(i=0;i<=CAP;i++)
     {
         if(stack[i] == 0)
         {
             break;
         }
        printf("%d\t",stack[i]);
     }
     printf("\n");
   }
}

int peek(void)
{
   int p;
   if(isEmpty())
   {
     return 0;
   }
   else
   {
     p=stack[top];
     return p;
   }
}

main()
{
  int m,e;
  printf("\nStatic STACK - Capacity = %d - Options :\n",CAP);
  while(1)
  {
      printf("\n0.EXIT\n1.Push");
      printf("\n2.Pop");
      printf("\n3.Traverse");
      printf("\n4.Peek element\nSelct an Option : ");
      scanf(" %d",&m);
      switch(m)
      {
          case 0 : exit(0);
          case 1 : printf("\nEnter the Element to push : ");
                    scanf(" %d",&e);push(e);
                    break;
          case 2 : e = pop();
                    if(e!=0)
                    {
                        printf("\nPopped out Element : %d",e);
                    }
                    break;
          case 3 : transverse();
                    break;
          case 4 : printf("\ntop ele is %d\n",peek());
                    break;
          default : printf("\nInvalid Input \n");
      }
  }
  return 0;
}