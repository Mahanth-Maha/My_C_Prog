#include <stdio.h>
#define CAP 5

int q[CAP];
int rear=0,front=0;
void insert(void)
{
   if(rear>=CAP)
   {
      printf("Q is Full\n");
   }
   else
   {
     printf("Enter data : ");
     scanf("%d",&q[rear]);
     rear++;
     printf("Inserted %d \n",q[rear-1]);
   }

}
void display(void)
{
     int i;
     printf("\nElements in Queue :\n");
     for(i=0;i<rear;i++)
     {
        printf("%d\t",q[i]);
     }
     printf("\n");
}
void dele(void)
{
     int k,l;
    l = q[0];
    for(k=0;k<(CAP-1);k++)
    {
        q[k]=q[k+1];
    }
    rear--;
    q[rear]=0;
    printf("deleted Element = %d\n",l);
}


main()
{
  int m,e;
  printf("\nStatic QUEUE - Capacity = %d - Options :\n",CAP);
  while(1)
  {
      printf("\n0.EXIT\n1.Append");
      printf("\n2.Delete First");
      printf("\n3.Traverse");
      printf("\n4.Peek element\nSelct an Option : ");
      scanf(" %d",&m);
      switch(m)
      {
          case 0 : exit(0);
          case 1 : insert();
                    break;
          case 2 : dele();
                    break;
          case 3 : display();
                    break;
          default : printf("\nInvalid Input \n");
      }
      fflush(stdin);
  }
  return 0;
}