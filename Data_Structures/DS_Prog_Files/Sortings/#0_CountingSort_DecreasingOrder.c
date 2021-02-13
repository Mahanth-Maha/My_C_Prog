#include <stdio.h>
#include <stdlib.h>

int *arr,n;

void counting_sort(int *,int,int,int);
void swap(int *,int ,int);
void display(void);
int min_max(int *,int ,int );

int main()
{
    int i,lr,rr; // left range and right range
	printf("\nHeap Sort - Decreasing Order - Array\n");
    printf("Enter the Array Size : \n");
    scanf("%d",&n);
    //printf("Enter the Left Range : \n");
    //scanf("%d",&lr);
    //printf("Enter the Right Range : \n");
    //scanf("%d",&rr);

	if(n>0)
    {
        printf("Enter the Array Elements : \n");
        arr = (int *)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        display();
        printf("\nApplying Heap sort on Array\n");
		lr = min_max(arr,n,1);
		rr = min_max(arr,n,-1);
		counting_sort(arr,n-1,lr,rr);
		display();
    }
    else
        printf("\nInvalid Input - Array Size Should be Natural Number\n");
    getch();
	return 0;
}

void counting_sort(int *a,int n ,int l,int r)
{
	int *count,c,i,j,m = r - l + 1,k=n;
	if(m > 0)
	{
		count = (int *)calloc(m,sizeof(int));
		for(i=0;i<m;i++)
			count[i] = 0;
		for(i=0;i<=n;i++)
		{
			c = a[i] - l;
			count[c]++;
		}
		for(i=m-1;i>=0;i--)
		{
			for(j=0;j<count[i];j++)
				a[k--] = l;
			l++;
		}
	}
}

int min_max(int *a,int n,int f)
{
	int i=0,m;
	m = a[i];
	for(i=1;i<n;i++)
		m = (f*a[i] > f*m)?m:a[i];
	return m;
}

void display(void)
{
    int i;
    printf("\nArray :\t\t");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    printf("\n");
}