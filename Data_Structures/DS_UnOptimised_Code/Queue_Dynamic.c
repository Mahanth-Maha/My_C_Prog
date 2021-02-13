#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node *link;
};

struct node *root=NULL;
void add_start(void)
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("Enter the node data : ");
   scanf("%d",&temp->data);
   temp->link=root;
   root=temp;
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

int len(void)
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

void display(void)
{
    struct node *temp;
    temp=root;
    if(root==NULL)
    {
	printf("No elements\n");
    }
    else
    {
    printf("Data in list\n");
     while(temp!=NULL)
     {
	printf("%d\t",temp->data);
	temp=temp->link;
     }
    printf("\n");
    }
}

main()
{
     int e,i=1,k;

     while(i==1)
     {
     printf("\nDynamic Queue - Options \n");
     printf("0.Exit\n");
     printf("1.Add Data\n");
     printf("2.Delete Data\n");
     printf("3.display\n");
     printf("\nEnter Option : ");
     scanf("%d",&k);
      switch(k)
      {
	 case 0:exit(1);
	 case 1:add_start();
		break;
	 case 2:e = del_end();
                if(e!=0)
                {
                    printf("Deleted Value : %d\n",e);
                }
                else{
                    printf("\nQueue is Empty\n");
                }
        		break;
	 case 3:display();
		break;
	 default:printf("\n\nInvalid INPUT\n\n");
      }
     }
     return 0;
}