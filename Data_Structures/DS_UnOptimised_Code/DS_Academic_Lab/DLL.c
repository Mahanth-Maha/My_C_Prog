#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *left;
   struct node *right;
};
struct node *root=NULL;

void add_end(void)
{
     struct node *temp;
     temp=(struct node*)malloc(sizeof(struct node));
     temp->left=NULL;
     temp->right=NULL;
     printf("Enter node data : ");
     scanf("%d",&temp->data);
     if(root==NULL)
     {
        root=temp;
     }
     else
     {
        struct node *p;
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
     }

}
void display(void)
{
     int l,i;
     if(root != NULL)
     {
        struct node *p;
        p=root;
        l=len();
         printf("Data in list\n");
         for(i=1;i<=l;i++)
         {
            printf("%d\t",p->data);
            p=p->right;
         }
     }
     else
     {
        printf("No Elements to display\n");
     }
}
int len(void)
{
     int count;
     if(root != NULL)
     {
         struct node *p;
         p=root;
         count=1;
         while(p->right!=NULL)
         {
             p=p->right;
             count++;
         }
         return count;
     }
     else
     {
         return 0;
     }
}
void add_start(void)
{
     struct node *temp,*p;
     temp=(struct node*)malloc(sizeof(struct node));
     temp->left=NULL;
     temp->right=NULL;
     printf("Enter node data : ");
     scanf("%d",&temp->data);
     p=root;
     temp->right=p;
     p->left=temp;
     root=temp;
}
void add_pos(void)
{
     int loc,l;
     printf("Enter the location to insert : ");
     scanf("%d",&loc);
     l=len();
     if(loc>(l+1))
     {
        printf("Invalid Location \nThe list has only %d elements only\n",l);
     }
     else
     {
        if(loc==1)
        {
            add_start();
        }
        if(loc==(l+1))
        {
            add_end();
        }
        else
        {
             int i;
             struct node *temp,*p,*q;
             temp=(struct node*)malloc(sizeof(struct node));
             temp->left=NULL;
             temp->right=NULL;
             printf("Enter node data : ");
             scanf("%d",&temp->data);
             p=root;
             for(i=1;i<(loc-1);i++)
             {
             p=p->right;
             }
             q=p->right;
             temp->right=q;
             temp->left=p;
             q->left=temp;
             p->right=temp;
        }
     }
}
void del_end(void)
{
     int l,i;
     struct node *temp,*p;
     temp=root;
     p=root;
     l=len();
     for(i=1;i<l;i++)
     {
        temp=temp->right;
     }
     for(i=1;i<(l-1);i++)
     {
        p=p->right;
     }
     p->right=NULL;
     if(l==1)
     {
        root=NULL;
     }
     temp->right=NULL;
     temp->left=NULL;
     free(temp);
}
void del_start(void)
{
     struct node *temp,*p;
     temp=root;
     root=temp->right;
     temp->right=NULL;
     temp->left=NULL;
     free(temp);
}
void del_pos(void)
{
     int loc,l,i;
     l=len();
     printf("Enter the node location to be deleted : ");
     scanf("%d",&loc);
     if(loc>l)
     {
        printf("invalid location\nthe list has only %d elements\n");
     }
     else
     {
         if(loc==1)
         {
               del_start();
         }
         else
         {
               if(loc==l)
               {
               del_end();
               }
               else
               {
                    struct node *temp,*p,*q;
                    temp=root;
                    for(i=1;i<(loc-1);i++)
                    {
                        temp=temp->right;
                    }
                    p=temp->right;
                    q=p->right;
                    temp->right=q;
                    q->left=temp;
                    p->right=p->left=NULL;
                    free(p);
               }
         }
     }
}
void del_all(void)
{
     int i,l;
     l=len();
     for(i=1;i<=l;i++)
     {
         del_end();
     }
     root = NULL;
}
void node_swap(void)
{
     int i,j,l,a,b,c;
     struct node *t1,*t2,*p,*q,*g,*h,*m,*n,*nua;
     printf("Enter nodes location to be swaped\n");
     scanf(" %d %d",&a,&b);
     l=len();
     if(a>l || b>l)
     {
        printf("invalid location\n");
     }
     else
     {
        if(a!=b)
        {
            if(a==1 || b==1)
            {
                if(b==1)
                {
                   c=a;
                   a=b;
                   b=c;
                }
                p=q=root;
                for(i=1;i<b;i++)
                {
                    q=q->right;
                }
                g=p->right;
                h=q->right;
                m=root;
                n=q->left;
                if(h!=NULL)
                {
                    //right SIDE link swap by left if not end node
                    t1=h->left;
                    h->left=g->left;
                    g->left=t1;
                }
                else
                {
                    nua = q;
                    //right SIDE link swap by left if end node
                    t1=nua;
                    nua=g->left;
                    g->left=t1;
                }

                //left link swap by rght
                t2=m;
                m=n->right;
                n->right=t2;


                //main right link swap
                t1=p->right;
                p->right=q->right;
                q->right=t1;
                //main left link swap
                t2=p->left;
                p->left=q->left;
                q->left=t2;
               root=q;
            }
            else
            {
                p=q=root;
                for(i=1;i<a;i++)
                {
                    p=p->right;
                }
                for(i=1;i<b;i++)
                {
                   q=q->right;
                }
                g=p->right;
                h=q->right;
                m=p->left;
                n=q->left;

               //right link swap by left
               t1=h->left;
               h->left=g->left;
               g->left=t1;

               //left link swap by right
               t2=m->right;
               m->right=n->right;
               n->right=t2;


               //main right link swap
               t1=p->right;
               p->right=q->right;
               q->right=t1;
               //main left link swap
               t2=p->left;
               p->left=q->left;
               q->left=t2;
            }
        }
        else
        {
            printf("Already Swaped\n");
        }
    }
}
void reverse_print(void)
{
     struct node *temp;
     int i,l;
     l=len();
     temp=root;
     while(temp->right!=NULL)
     {
       temp=temp->right;
     }
     for(i=0;i<l;i++)
     {
        printf("%d\t",temp->data);
        temp=temp->left;
     }
}
void swap(int a,int b)
{
    int i,j,c;
    struct node *t1,*t2,*p,*q,*g,*h,*m,*n,*nua,*nub;
    if(a!=b)
    {
        if(a==1 || b==1)
        {

            if(b==1)
            {
                c=a;
                a=b;
                b=c;
            }
            p=q=root;
            for(i=1;i<b;i++)
            {
                q=q->right;
            }


            g=p->right;
            h=q->right;
            m=root;
            n=q->left;



            if(h!=NULL)
            {
                //right SIDE link swap by left if not end node
                t1=h->left;
                h->left=g->left;
                g->left=t1;
            }
            else
            {
                nua = q;
                //right SIDE link swap by left if end node
                t1=nua;
                nua=g->left;
                g->left=t1;
            }

            //left link swap by right
            t2=m;
            m=n->right;
            n->right=t2;

            //main right link swap
            t1=p->right;
            p->right=q->right;
            q->right=t1;
            //main left link swap
            t2=p->left;
            p->left=q->left;
            q->left=t2;
            root=q;
        }
        else
        {

            p=q=root;

            for(i=1;i<a;i++)
            {
                p=p->right;
            }

            for(i=1;i<b;i++)
            {
                q=q->right;
            }

            g=p->right;
            h=q->right;
            m=p->left;
            n=q->left;

            //right link swap by left
            t1=h->left;
            h->left=g->left;
            g->left=t1;


            //left link swap by right
            t2=m->right;
            m->right=n->right;
            n->right=t2;

            //main right link swap
            t1=p->right;
            p->right=q->right;
            q->right=t1;
            //main left link swap
            t2=p->left;
            p->left=q->left;
            q->left=t2;

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
    printf("\nReversed\n");
    display();
}

main()
{
    int p,i=1;
    while(i==1)
    {
        printf("\nEnter a Number\n");
        printf("0.exit\n");
        printf("1.add at end\n");
        printf("2.display\n");
        printf("3.length\n");
        printf("4.add at start\n");
        printf("5.add at position\n");
        printf("6.delete the End\n");
        printf("7.delete the Start\n");
        printf("8.delete the Position\n");
        printf("9.delete the list\n");
        printf("10.Swap the elements \n");
        printf("11.reverse print the elements\n");
        printf("12.Reverse the list \n");
        printf("\n");
        scanf("%d",&p);
        switch(p)
        {
            case 0:exit(1);
            case 1:add_end();
                   break;
            case 2:display();
                   break;
            case 3:printf("the list has %d elements\n",len());
                   break;
            case 4:add_start();
                   break;
            case 5:add_pos();
                   break;
            case 6:del_end();
                   break;
            case 7:del_start();
                   break;
            case 8:del_pos();
                   break;
            case 9:del_all();
                   break;
            case 10:node_swap();
                   break;
            case 11:reverse_print();
                   break;
            case 12:reverse();
                   break;
            default:printf("Invalid input\n");
         }
    }
    return 0;
} 