#include <stdio.h>
#include <stdlib.h>

int *arr,n;

void selection_sort(int *,int ,int);
int min(int *, int ,int );
void swap(int *,int ,int );
void display(void);

int main()
{
    int i;
    printf("Enter the Array Size : \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Enter the Array Elements : \n");
        arr = (int *)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        display();
        printf("\nApplying Selection sort on Array\n");
        selection_sort(arr,0,n-1);
        display();
    }
    else
        printf("\nInvalid Input - Array Size Should be Natural Number\n");
	getch();
    return 0;
}
void display(void)
{
    int i;
    printf("\nArray :\t\t");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    printf("\n");
}

void selection_sort(int *a,int p,int r)
{
    if(p<r)
    {
        int x;
        x = min(a,p,r);
        swap(a,p,x);
        selection_sort(a,p+1,r);
    }
}

void swap(int *a,int i,int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int min(int *a, int p,int r)
{
    int i,x = p;
    for(i=p+1;i<=r;i++)
        x = (a[i]<a[x])?i:x;
    return x;
}
