#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node *link;
}*root = NULL;

void add_end(void);
void add_start(void);
int len(void);
void del_end(void);
void del_start(void);
void display(void);

int main()
{
    int p;
    while(1)
    {
        printf("\nDouble Ended Queue : Single Linked List - Options Avaliablea\n\n0.exit\n1.add at end\n2.add at Start\n3.Display\n4.delete at start\n5.delete at end\n6.Length\n");
        printf("\nEnter the Option Value : ");
        scanf("%d",&p);
        switch(p)
        {
            case 0:exit(1);
            case 1:add_end();break;
            case 2:add_start();break;
            case 3:display();break;
            case 4:del_start();break;
            case 5:del_end();break;
            case 6:printf("length of list is %d \n",len());break;
            default:printf("\nInvalid input\n");
        }
    }
    return 0;
}

void add_end(void)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data : ");
    scanf(" %d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        struct node *p =root;
        while(p->link!=NULL)
            p=p->link;
        p->link=temp;
    }
}

void add_start(void)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data : ");
    scanf("%d",&temp->data);
    temp->link=root;
    root=temp;
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
    struct node *temp=root;
    if(root==NULL)
        printf("No elements\n");
    else
    {
        printf("Data in list\nSTART\t");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
        printf("END\n");
    }
}
void del_end(void)
{
    struct node *temp,*p=root;
    if(p)
    {
        if(p->link == NULL)
        {
            printf("Deleted Data from END : %d",p->data);
            root = NULL;
            free(p);
        }
        else
        {
            while(p->link->link)
                p=p->link;
            temp=p->link;
            printf("Deleted Data from END : %d",temp->data);
            p->link=NULL;
            free(temp);
        }
    }
    else
        printf("No Elements in Queue to Delete\n");
}
void del_start(void)
{
    struct node *temp,*p = root;
    if(p)
    {
        temp=root;
        printf("Deleted Data from START : %d",p->data);
        p=p->link;
        root=p;
        free(temp);
    }
    else
        printf("No Elements in Queue to Delete");
}
