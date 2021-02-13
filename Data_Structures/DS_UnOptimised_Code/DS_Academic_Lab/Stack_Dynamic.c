#include <stdio.h>
#define CAP 5

int stack[CAP];
int top=-1;

struct node
{
     int data;
     struct node *link;
};
struct node *root = NULL;

int len()
{
    int count=0;
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        temp=temp->link;
        count++;
    }
    return count;
}

void add_end(void)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf(" %d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

void display(void)
{
    struct node *temp;
    temp=root;
    if(root==NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("Data in Stack\n");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
}

int del_end(void)
{
    int l,i=0,loc,dat;
    struct node *temp,*p;
    p=root;
    loc=len();
    l=len();
    if(loc !=0)
    {
        if(loc == l && loc != 1)
        {
            while(i<(l-2))
            {
                p=p->link;
                i++;
            }
            temp=p;
            p=p->link;
            dat = p->data;
            temp->link=NULL;
            free(p);
            return dat;
        }
        if(loc == 1)
        {
            p = root;
            dat = root->data;
            free(p);
            root = NULL;
            return dat;
        }
    }
    else
    {
        return 0;
    }
}

int peek(void)
{
    int l,i=1;
    struct node *p;
    p=root;
    l=len();
    while(i<l)
    {
        p=p->link;
        i++;
    }
    return p->data;
}

main()
{
  int m,e;
  printf("\nDynamic STACK - Options :\n",CAP);
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
          case 1 : add_end();
                    break;
          case 2 : e = del_end();
                    if(e!=0)
                    {
                        printf("\nPopped out Element : %d\n",e);
                    }
                    else
                    {
                        printf("\nStack Underflow\n");
                    }
                    break;
          case 3 : display();
                    break;
          case 4 : printf("\ntop ele is %d\n",peek());
                    break;
          default : printf("\nInvalid Input \n");
      }
    fflush(stdin);
  }

  return 0;
}