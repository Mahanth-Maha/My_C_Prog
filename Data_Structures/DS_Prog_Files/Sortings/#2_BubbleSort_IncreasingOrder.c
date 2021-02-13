#include <stdio.h>
#include <stdlib.h>

int *arr,n;

void bubble_sort(int *,int);
void swap(int *,int ,int );
void display(void);

int main()
{
    int i;
	printf("\nBubble Sort - Increasing Order - Array\n");
    printf("Enter the Array Size : \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Enter the Array Elements : \n");
        arr = (int *)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        display();
        printf("Applying Bubble sort on Array\n");
        bubble_sort(arr,n);
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

void bubble_sort(int *a,int n)
{
    int i,j,swapped;
    for(i=0;i<n;i++)
    {
        swapped = 0;
        for(j=0;j<n-(i+1);j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a,j,j+1);
                swapped = 1;
            }
        }
        if(swapped ==0 )
            break;
    }
}

void swap(int *a,int i,int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
