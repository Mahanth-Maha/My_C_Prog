#include <stdio.h>
#include <stdlib.h>

int *arr,n,**graph;

void connect(void);
void disconnect(void);
void AdjMat(void);
int indexof(int );

void BFSearch(int );
void BFS(int ,int *,int *,int *,int *);
void BFT(void);

int main()
{
    int i,j,c,d;
    printf("Breadth First Search - Graph - 2D Array - Adjacenecy Matrix Representation \nEnter No of Nodes in Graph :");
    scanf("%d",&n);
    arr = (int *)calloc(n,sizeof(int));
    printf("Enter Data Of Nodes : ");
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    graph = calloc(n,sizeof(int *));
    for(i=0;i<n;i++)
        graph[i] = calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            graph[i][j] = 0;
    }
    while(1)
    {
        printf("\nSelect an Operation \n0.Exit\n\n1.Connect Nodes\n2.Disconnect Nodes\n3.Breadth First Search\n4.Breadth First Traversal\n7.Adjacenecy Matrix\n Enter Value : ");
        scanf("%d",&c);
        switch(c)
        {
            case 0:exit(0);break;
            case 1:connect();break;
            case 2:disconnect();break;
            case 3:printf("Enter The Starting Node to search : ");
                    scanf("%d",&d);
                    BFSearch(d);
                    break;
            case 4:BFT();break;
            case 7:AdjMat();break;
            default : printf("Invalid Input");
        }
    }
    return 0;
}
void connect(void)
{
    int f,s,fi,si;
    printf("Enter First Node Data and Second Node Data : ");
    scanf(" %d %d",&f,&s);
    fi = indexof(f);
    si = indexof(s);
    if(fi!=-1 && si !=-1)
        graph[fi][si] = graph[si][fi] = 1;
    else
        printf("\nNO such elements to connect\n");
}
void disconnect(void)
{
    int f,s,fi,si;
    printf("Enter Starting Node Data : ");
    scanf("%d",&f);
    fflush(stdin);
    printf("Enter Ending Node Data : ");
    scanf("%d",&s);
    fflush(stdin);
    fi = indexof(f);
    si = indexof(s);
    if(fi!=-1 && si !=-1)
        graph[fi][si] = graph[si][fi] = 0;
    else
        printf("\nNO such elements to disconnect\n");
}
void AdjMat(void)
{
    int i,j;
    printf("\nDATA\t");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
        for(j=0;j<n;j++)
            printf("%d\t",graph[i][j]);
        printf("\n\n");
    }
}
int indexof(int d)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == d)
            return i;
    }
    return -1;
}

void BFT(void)
{
    int *Q,*visited,f=-1,r=-1,i,connected=0;
    Q = (int *)calloc(n,sizeof(int));
    visited = (int *)calloc(n,sizeof(int));
    printf("\nBFS Traversal : \n");
    for(i=0;i<n;i++)
        visited[i]=0;
    for(i=0;i<n;i++)
    {
        if(visited[i] == 0)
        {
            printf("\nComponent - %d from %d : \n" ,++connected, arr[i]);
            Q[++r] = arr[i];
            BFS(arr[i],Q,visited,&f,&r);
        }
    }
    printf("\nNumber of Connected Components in Graph = %d\n\n",connected);
}

void BFSearch(int d)
{
    int *Q,*visited,f=-1,r=-1,i;
    Q = (int *)calloc(n,sizeof(int));
    visited = (int *)calloc(n,sizeof(int));
    printf("BFS Search : ");
    for(i=0;i<n;i++)
        visited[i]=0;
    Q[++r] = d;
    BFS(d,Q,visited,&f,&r);
    printf("\n");
}

void BFS(int d,int *Q,int *visited,int *f,int *r)
{
    int j,k,i = indexof(d);
    if(i != -1)
    {
        visited[i] = 1;
        for(j=0;j<n;j++)
        {
            if(graph[i][j] == 1 && visited[j] == 0)
            {
                visited[j] = 1;
                Q[++(*r)] = arr[j];
            }
        }
        if(*r != *f)
        {
            k = Q[++(*f)];
            printf("\t%d",k);
            BFS(k,Q,visited,f,r);
        }
    }
    else
        printf("\nData Not Found\n");
}

