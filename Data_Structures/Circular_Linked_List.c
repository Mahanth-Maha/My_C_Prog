#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

struct node
{
     int data;
     struct node *link;
};
struct node *root = NULL;

void add_end(void)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data : ");
    scanf(" %d",&temp->data);
    if(root==NULL)
    {
        root=temp;
        temp->link = temp;
    }
    else
    {
        struct node *p;
        p=root;
        p=p->link ;
        while(p->link!=root)
        {
            p=p->link;
        }
        p->link=temp;
        temp->link=root;
    }
}
void add_pos(void)
{
    int loc,l;
    printf("Enter the Location : ");
    scanf("%d",&loc);
    l=len();
    if(loc>(l+1))
    {
        printf("invalid location\nThe list has only %d elements\n",len());
    }
    else
    {
        if(loc==1 || loc==0)
        {
            struct node *temp,*p;
            temp=(struct node*)malloc(sizeof(struct node));
            printf("Enter the node data : ");
            scanf("%d",&temp->data);
            p = root;
            p=p->link;
            while(p->link!=root)
            {
                p= p->link;
            }
            p->link=temp;
            temp->link=root;
            root=temp;
        }
        else
        {
            if(loc<(l+1))
            {
                int i;
                struct node *temp,*p;
                temp=(struct node*)malloc(sizeof(struct node));
                printf("Enter the node data : ");
                scanf("%d",&temp->data);
                temp->link=NULL;
                p=root;
                for(i=1;i<(loc-1);i++)
                {
                    p=p->link;
                }
                temp->link=p->link;
                p->link=temp;
            }
            else
            {
                add_end();
            }
        }
    }
}
int len()
{
    int count=1;
    struct node *temp;
    temp=root;
    temp=temp->link;
    while(temp!=root)
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
        while(temp->link!=root)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
        printf("%d\n",temp->data);
    }
}
int del_end(void)
{
    int l,i=0,dat;
    struct node *temp,*p;
    p=root;
    l=len();
    if(l==0)
    {
        root = NULL;
        return 0;
    }
    else
    {
        while(i<(l-2))
        {
            p=p->link;
            i++;
        }
        temp=p;
        p=p->link;
        dat=p->data;
        temp->link=p->link;
        free(p);

        return dat;
    }
}
void del_pos(void)
{
    int l,i=0,loc;
    struct node *temp,*p,*q;
    p=root;
    printf("Enter the node number to be deleted :");
    scanf("%d",&loc);
    l=len();
    if(loc>l)
    {
        printf("Invalid location\nlength of elements is %d\n",l);
        display();
    }
    else
    {
        if(loc==l)
        {
            while(i<(l-2))
            {
                p=p->link;
                i++;
            }
            temp=p;
            p=p->link;
            temp->link=p->link;
            free(p);
        }
        else if(loc==1)
        {
            p=root;
            temp=root;
            q=root;
            q=q->link;
            while(q->link!=root)
            {
                q = q->link;
            }
            p = p->link;
            q->link = p;
            root=p;
            temp->link=NULL;
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
            p->link=NULL;
            free(p);
        }
    }
}

void del_all(void)
{
    int i,l;
    struct node *p;
    p=root;
    p=p->link;
    while(p->link !=root)
    {
        struct node* temp;
        temp = p;
        p=p->link;
        temp->link=NULL;
        free(temp);
    }
    free(p);
    root=NULL;
    printf("All elements are deleted\n");
}


int main()
{
    int p,e;
    while(1)
    {
        printf("\nCircular Linked List - Options Avaliable \n");
        printf("\t0.exit\n\n");
        printf("\t1.add at end\n");
        printf("\t2.dispaly\n");
        printf("\t3.length\n");
        printf("\t4.add at pos\n");
        printf("\t5.delete the End\n");
        printf("\t6.delete the Pos\n");
        printf("\t7.delete the list\n");
        printf("\nEnter the Option Value : ");
        scanf("%d",&p);
        switch(p)
        {
            case 0:exit(1);
            case 1:add_end();
                    break;
            case 2:display();
                    break;
            case 3:printf("length of list is %d \n",len());
                    break;
            case 4:add_pos();
                    break;
            case 5:e= del_end();
                    if(e!=0)
                    {
                        printf("\nLast Data : %d is deleted\n",e);
                    }
                    else{
                        printf("\nNo Elements\n");
                    }
                    break;
            case 6:del_pos();
                    break;
            case 7:del_all();
                    break;
            default:printf("\n***********Invalid input************\n");
        }
    }
    return 0;
}
