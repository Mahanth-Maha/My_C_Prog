#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node *link;
}*root = NULL;

void add_end(void);
void add_start(void);
void add_pos(void);
int len(void);
void del_end(void);
void del_pos(void);
void display(void);

int main()
{
    int p;
    while(1)
    {
        printf("\nSingle Linked List - Options Avaliablea\n\n0.exit\n1.add at end\n2.dispaly\n3.length\n4.add at start\n5.add at pos\n6.delete the End\n7.delete the Pos\n");
        printf("\nEnter the Option Value : ");
        scanf("%d",&p);
        switch(p)
        {
            case 0:exit(1);
            case 1:add_end();break;
            case 2:display();break;
            case 3:printf("length of list is %d \n",len());break;
            case 4:add_start();break;
            case 5:add_pos();break;
            case 6:del_end();break;
            case 7:del_pos();break;
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
void add_pos(void)
{
    int loc,l;
    printf("Enter the Location : ");
    scanf("%d",&loc);
    l=len();
    if(loc>(l+1))
        printf("invalid location\nThe list has only %d elements\n",len());
    else
    {
        if(loc==1)
        {
            struct node *temp=(struct node*)malloc(sizeof(struct node));
            printf("Enter the node data : ");
            scanf("%d",&temp->data);
            temp->link=root;
            root=temp;
        }
        else
        {
            if(loc<(l+1))
            {
                int i;
                struct node *p=root,*temp=(struct node*)malloc(sizeof(struct node));
                printf("Enter the node data : ");
                scanf("%d",&temp->data);
                temp->link=NULL;
                for(i=1;i<(loc-1);i++)
                    p=p->link;
                temp->link=p->link;
                p->link=temp;
            }
            else
                add_end();
        }
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
    struct node *temp=root;
    if(root==NULL)
        printf("No elements\n");
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
void del_end(void)
{
    struct node *temp,*p=root;
    if(root!=NULL)
    {

        if(root->link)
        {
            while(p->link->link)
                p=p->link;
            temp=p->link;
            p->link=NULL;
            free(temp);
        }
        else
        {
            root = NULL;
            free(p);
        }
    }
    else
        printf("\nNo Elements\n");
}
void del_pos(void)
{
    int l,i=0,loc;
    struct node *temp,*p = root;
    if(root!=NULL)
    {
        printf("Enter the node number to be deleted :");
        scanf("%d",&loc);
        l=len();
        fflush(stdin);
        if(loc > l || loc <= 0)
            printf("Invalid location\nlength of elements is %d\n",l);
        else
        {
            if(loc==l)
                del_end();
            else if(loc==1)
            {
                temp=root;
                p=p->link;
                root=p;
                free(temp);
            }
            else
            {
                for(i=1;i<loc;i++)
                {
                    temp=p;
                    p=p->link;
                }
                temp->link=p->link;
                free(p);
            }
        }
    }
    else
        printf("\nNo Elments\n");
}
