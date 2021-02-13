#include <stdio.h>
#include <stdlib.h>

int *arr,n;

void shell_sort(int *,int);
void display(void);

int main()
{
    int i;
	printf("\nShell Sort - Decreasing Order - Array\n");
    printf("Enter the Array Size : \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Enter the Array Elements : \n");
        arr = (int *)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        display();
        printf("Applying Shell sort on Array\n");
        shell_sort(arr,n);
        display();
    }
    else
        printf("\nInvalid Input - Array Size Should be Natural Number\n");
	getch();
    return 0;
}

void shell_sort(int *a, int n) {
    int temp,gap,k,j;
    for(gap=n/2;gap>0;gap=gap/2)
    {
        for (j=gap;j<n;j++)
        {
            temp = a[j];
            for (k=j; k>=gap && a[k-gap]<temp;k=k-gap)
            {
                a[k] = a[k-gap];
            }
            a[k] = temp;
        }
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
