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
        if(loc==1)
        {
            struct node *temp;
            temp=(struct node*)malloc(sizeof(struct node));
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
void del_end(void)
{
    int l,i=0;
    struct node *temp,*p;
    p=root;
    l=len();
    while(i<(l-2))
    {
        p=p->link;
        i++;
    }
    temp=p;
    p=p->link;
    temp->link=NULL;
    free(p);
}
void del_pos(void)
{
    int l,i=0,loc;
    struct node *temp,*p;
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
            temp->link=NULL;
            free(p);
        }
        else if(loc==1)
        {
            p=root;
            temp=root;
            p=p->link;
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
    l=len();
    for(i=0;i<l;i++)
    {
        del_end();
    }
    p=root;
    free(p);
    root=NULL;
    printf("All elements are deleted\n");
}
void node_swap(void)
{
    int a,b,i,h,l;
    struct node *p,*q,*t1,*t2,*s;
    p=root;
    q=root;
    printf("Enter the location of nodes to be swaped\n");
    scanf("%d %d",&a,&b);
    l=len();
    if(a>l || b>l)
    {
        printf("Out of list location there are only %d locations\n",l);
    }
    else
    {
        if(a!=b)
        {
            if(a==1 || b==1)
            {
                if(a!=1)
                {
                    h=a;
                    a=b;
                    b=h;
                }
                for(i=1;i<(b-1);i++)
                {
                    q=q->link;
                }
                t1=root;
                root=q->link;
                s=q;
                q=q->link;
                s->link=t1;

                t2=p->link;
                p->link=q->link;
                q->link=t2;
            }
            else
            {
                for(i=1;i<(a-1);i++)
                {
                    p=p->link;
                }
                for(i=1;i<(b-1);i++)
                {
                    q=q->link;
                }
                t1=p->link;
                p->link=q->link;
                q->link=t1;

                p=p->link;
                q=q->link;

                t2=p->link;
                p->link=q->link;
                q->link=t2;
            }
        }
        else
        {
           printf("Already swapped or same location\n");
        }
    }
}
void swap(int a,int b)
{
    int i,h;
    struct node *p,*q,*t1,*t2,*s;
    p=root;
    q=root;
    if(a!=b)
    {
        if(a==1 || b==1)
        {
            if(a!=1)
            {
                h=a;
                a=b;
                b=h;
            }
            for(i=1;i<(b-1);i++)
            {
                q=q->link;
            }
            t1=root;
            root=q->link;
            s=q;
            q=q->link;
            s->link=t1;

            t2=p->link;
            p->link=q->link;
            q->link=t2;
        }
        else
        {
            for(i=1;i<(a-1);i++)
            {
                p=p->link;
            }
            for(i=1;i<(b-1);i++)
            {
                q=q->link;
            }
            t1=p->link;
            p->link=q->link;
            q->link=t1;

            p=p->link;
            q=q->link;

            t2=p->link;
            p->link=q->link;
            q->link=t2;
        }
    }
}
void reverse()
{
    int a,b,l,i,n;
    l=len();
    a=1;
    b=l;
    n=l/2;
    for(i=0;i<n;i++)
    {
        swap(a,b);
        a++;
        b--;
    }
}
void sort(void)
{
    int i,j,k,n,e=1,f=1;
    struct node *x,*y;
    n=len();
    x=root;
    y=root;
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            y=root;
            for(k=1;k<=e;k++)
            {
                y=y->link;
            }
            e++;
            if(x->data > y->data)
            {
                swap(e,f);
            }
            x=root;
            for(k=1;k<i;k++)
            {
                x=x->link;
            }
        }
       y=root;
       e=0;
       for(k=0;k<=i;k++)
       {
            y=y->link;
            e++;
       }
       x=x->link;
       f++;
    }
    printf("Elements Sorted \n");
}
void max(int flag)
{
    int m;
    struct node* temp;
    temp = root;
    m = temp->data;
    while(temp != NULL)
    {
        if((m * flag) < temp->data * flag)
        {
            m = temp->data;
        }
        temp = temp->link;
    }
    if(flag == 1)
    {
        printf("Them Maximum value in list is : %d\n",m);
    }
    else
    {
        printf("The Minimum value in list is : %d\n",m);
    }
}

int main()
{
    int p;
    while(1)
    {
        printf("\nSingle Linked List - Options Avaliable \n");
        printf("\t0.exit\n\n");
        printf("\t1.add at end\n");
        printf("\t2.dispaly\n");
        printf("\t3.length\n");
        printf("\t4.add at pos\n");
        printf("\t5.delete the End\n");
        printf("\t6.delete the Pos\n");
        printf("\t7.delete the list\n");
        printf("\t8.swap nodes\n");
        printf("\t9.reverse the elements\n");
        printf("\t10.Sort the elements\n");
        printf("\t11.maximum\n");
        printf("\t12.minimum\n");
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
            case 5:del_end();
                    break;
            case 6:del_pos();
                    break;
            case 7:del_all();
                    break;
            case 8:node_swap();
                    break;
            case 9:reverse();
                    break;
            case 10:sort();
                    break;
            case 11:max(1);
                    break;
            case 12:max(-1);
                    break;
            default:printf("\n***********Invalid input************\n");
        }
    }
    return 0;
}

