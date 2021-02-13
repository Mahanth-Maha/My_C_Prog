#include <stdio.h>
#include <stdlib.h>

int *arr,n;

void heap_sort(int *,int);
void Min_Heapify(int * ,int ,int );
void Build_Min_Heap(int *, int );
void swap(int *,int ,int);
void display(void);

int main()
{
    int i;
	printf("\nHeap Sort - Decreasing Order - Array\n");
    printf("Enter the Array Size : \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Enter the Array Elements : \n");
        arr = (int *)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        display();
        printf("\nApplying Heap sort on Array\n");
        heap_sort(arr,n-1);
        display();
    }
    else
        printf("\nInvalid Input - Array Size Should be Natural Number\n");
    getch();
	return 0;
}

void Min_Heapify(int *a,int i,int len)
{
    int l,r,small;
    if(i+1 >= 0)
    {
        l = (i+1)*2 - 1;
        r = (i+1)*2 +1 -1;
        small = i ;
        if(l <= len && a[l] < a[i])
            small = l;
        else
            small = i;
        if(r <= len && a[r] < a[small])
            small = r;
    }
    if(small != i)
    {
        swap(a,i,small);
        Min_Heapify(a,small,len);
    }
}

void Build_Min_Heap(int *a , int n)
{
    int i;
    for(i=(n/2)+1;i>=0;i--)
    {
        Min_Heapify(a,i,n);
    }
}

void heap_sort(int * a,int n)
{
    int i;
    Build_Min_Heap(a,n);
    while(n>0)
    {
        swap(a,0,n);
        n--;
        Min_Heapify(a,0,n);
    }
}

void display(void)
{
    int i;
    printf("\nArray :\t\t");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    printf("\n");
}

void swap(int *a,int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
