#include <stdio.h>
#include <stdlib.h>

int *arr,n;

void quick_sort(int *,int ,int);
int partition(int *,int,int);
void display(void);
void swap(int * ,int ,int );

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
        printf("Applying Quick sort on Array\n");
        quick_sort(arr,0,n-1);
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
    printf("\nArray :\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    printf("\n");
}

void swap(int *a,int i,int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int *a,int p,int r)
{
    int i=p-1,j,x,temp;
    x = a[r];
    for(j=p;j<r;j++)
    {
        if(a[j] < x)
        {
            i++;
            swap(a,i,j);
        }
    }
    i++;
    swap(a,i,r);
    return i;
}

void quick_sort(int *a,int p,int r)
{
    int q;
    if(p<r)
    {
        q = partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}
