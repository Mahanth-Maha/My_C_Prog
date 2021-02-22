#include <stdio.h>
#include <stdlib.h>

int *arr,n;

void insertion_sort(void);
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
        printf("Applying Insertion sort on Array\n");
        insertion_sort();
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
    printf("Array :\t");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    printf("\n");
}

void insertion_sort(void)
{
    int i,j,x;
    for(j=1;j<n;j++)
    {
        i=j-1;
        x=arr[j];
        while(i >= 0 && arr[i] > x)
            *(arr+(i--)+1) = *(arr+i);
        arr[i+1]=x;
    }
}

