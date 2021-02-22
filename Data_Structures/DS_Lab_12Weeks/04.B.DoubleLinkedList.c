#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev,*next;
}*root = NULL;

void add_end(void);
void add_begin(void);
void add_after(void);
void display(void);
void del(int);
int len(void);

int main()
{
    int c,n;
    printf("Double Linked List\n");
    while(1)
    {
        printf("\n\nOperations :\n1.Add at End\n2.Add at Begin\n3.Add After\n4.Display\n5.Delete End\n6.Delete Start\n7.Delete Pos\n0.EXIT\nSelect from menu : ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:add_end();break;
            case 2:add_begin();break;
            case 3:add_after();break;
            case 4:display();break;
            case 5:n=len();
                    del(n);
                    break;
            case 6:del(1);break;
            case 7:printf("\nEnter Postion to delete : ");
                    scanf("%d",&n);
                    del(n);
                    break;
            case 0:exit(0);
                    break;
            default : printf("\nInvalid Input\n");
        }
    }
    return 0;
}

void add_end(void)
{
    struct node *p = root,* t = (struct node *)malloc(sizeof(struct node));
    if(t!=NULL)
    {
        printf("Enter Data :");
        scanf("%d",&t->data);
        t->prev = t->next = NULL;
        if(root == NULL)
            root = t;
        else
        {
            while(p->next)
                p=p->next;
            t->prev = p;
            p->next = t;
        }
    }
}
void add_begin(void)
{
    struct node * t = (struct node *)malloc(sizeof(struct node));
    if(t!=NULL)
    {
        printf("Enter Data :");
        scanf("%d",&t->data);
        t->prev = t->next = NULL;
        if(root == NULL)
            root = t;
        else
        {
            t->next = root;
            root = t;
            root ->next ->prev = root;
        }
    }
}
void add_after(void)
{
    int pos,i=1;
    printf("Enter the Location to insert node After it :");
    scanf("%d",&pos);
    if(pos>0 && pos <len())
    {
        struct node *p=root, * t = (struct node *)malloc(sizeof(struct node));
        if(t)
        {
            printf("Enter Data :");
            scanf("%d",&t->data);
            t->prev = t->next = NULL;
            while(i != pos)
            {
                p=p->next;
                i++;
            }
            t->next = p->next;
            t->prev = p;
            t->next->prev=t;
            t->prev->next=t;
        }
    }
    else
        printf("Invalid Location");
}
void display(void)
{
    struct node * p = root;
    if(p==NULL)
        printf("\nEmpty\n");
    else
    {
        printf("Data in List :\n");
        while(p)
        {
            printf("%d\t",p->data);
            p=p->next;
        }
    }
}
void del(int pos)
{
    int i=1;
    if(pos>0 && pos<=len())
    {
        struct node * p = root;
        if(pos == 1 )
        {
            if(p->next != NULL)
            {   p->next->prev = NULL;
                root = p->next;
                p->next = NULL;
                free(p);
            }
            else
            {
                free(p);
                root=NULL;
            }
        }
        else if(pos == len())
        {
            while(p->next)
                p=p->next;
            p->prev->next = NULL;
            p->prev = NULL;
            free(p);
        }
        else
        {
            while(i != pos)
            {
                p=p->next;
                i++;
            }
            p->prev->next = p->next;
            p->next->prev = p->prev;
            p->next = p->prev = NULL;
            free(p);
        }
    }
    else{
        if(len() == 0)
            printf("\nNo elements to delete\n");
        else
            printf("\nInvalid Position to Delete\n");
    }
}
int len(void)
{
    int c=0;
    struct node * p = root;
    while(p)
    {
        p=p->next;
        c++;
    }
    return c;
}
