#include <stdio.h>
#include <stdlib.h>

int *arr,n,**graph;
int *S,top=-1;

void connect(void);
void disconnect(void);
void AdjMat(void);
int indexof(int );

void push(int);
int pop(void);

void DFT(void);
void DFSearch(int );
void DFS(int ,int *,int *);

int main()
{
    int i,j,c,d;
    printf("Depth First Search - Graph - 2D Array - Adjacenecy Matrix Representation \nEnter No of Nodes in Graph :");
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
        printf("\nSelect an Operation \n0.Exit\n\n1.Connect Nodes\n2.Disconnect Nodes\n3.Depth First Search\n4.Depth First Traversal\n7.Adjacenecy Matrix\n Enter Value : ");
        scanf("%d",&c);
        switch(c)
        {
            case 0:exit(0);break;
            case 1:connect();break;
            case 2:disconnect();break;
            case 3:printf("Enter the starting Node to search : ");
                    scanf("%d",&d);
                    DFSearch(d);
                    break;
            case 4:DFT();break;
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
    scanf("%d ",&f);
    printf("Enter Ending Node Data : ");
    scanf("%d ",&s);
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
void DFT(void)
{
    int *visited,i,connected=0;
    S = (int *)calloc(n,sizeof(int));
    visited = (int *)calloc(n,sizeof(int));
    printf("\nDepth First Traversal :\n");
    for(i=0;i<n;i++)
        visited[i] = 0;
    for(i=0;i<n;i++)
    {
        if(visited[i] == 0)
        {
            printf("\nConnected Component - %d from %d :\n",++connected,arr[i]);
            DFS(arr[i],visited,S);
        }
    }
    printf("\nNo of Connected Components in Graph = %d\n",connected);
}
void DFSearch(int d)
{
    int *visited,i;
    S = (int *)calloc(n,sizeof(int));
    visited = (int *)calloc(n,sizeof(int));
    printf("\nDepth First Search :\n");
    for(i=0;i<n;i++)
        visited[i] = 0;
    DFS(d,visited,S);
    printf("\n");
}
void DFS(int d,int * visited ,int *S)
{
    int i,j,k;
    i = indexof(d);
    if(i!=-1)
    {
        visited[i]=1;
        push(arr[i]);
        for(j=0;j<n;j++)
        {
            if(graph[i][j] == 1 && visited[j] == 0)
            {
                DFS(arr[j],visited,S);
            }
        }
        k = pop();
        printf("%d \t",k);
    }
    else
        printf("\n\tData Not Found\n");
}
void push(int d)
{
    if(top!=n-1)
        *(S+(++top)) = d;
}
int pop(void)
{
    if(top == -1)
        return top;
    return *(S+top--);
}
