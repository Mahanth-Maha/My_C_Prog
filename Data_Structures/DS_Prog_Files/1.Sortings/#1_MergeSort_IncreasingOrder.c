#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *arr,n;

void merge_sort(int *,int,int);
void merge(int *,int ,int,int);
void display(void);

int main()
{
    int i;
	printf("\nMerge Sort - Increasing Order - Array\n");
    printf("Enter the Array Size : \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Enter the Array Elements : \n");
        arr = (int *)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        display();
        printf("Applying Merge sort on Array\n");
        merge_sort(arr,0,n-1);
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

void merge(int *a,int p,int q,int r)
{
    int *L,*R,i,j,k,n1,n2;
    n1 = q - p + 1;
    n2 = r - q;
    L = (int *)calloc(n1+1,sizeof(int));
    R = (int *)calloc(n2+1,sizeof(int));
    j=0;
    for(i=p;i<=q;i++)
        L[j++]=a[i];
    j=0;
    for(i=q+1;i<=r;i++)
        R[j++]=a[i];
    L[n1] = pow(2,7*sizeof(int));
    R[n2] = pow(2,7*sizeof(int));
    j=0;
    k=0;
    for(i=p;i<=r;i++)
    {
        if(L[j] <= R[k] )
            a[i]=L[j++];
        else
            a[i]=R[k++];
    }
}

void merge_sort(int *a,int p,int r)
{
    int q;
    if(p<r)
    {
        q = (p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}
