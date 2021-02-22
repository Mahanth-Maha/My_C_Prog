#include <stdio.h>
#include <stdlib.h>

int NoofKeys = 0, Nokeys = 0;

int LinearSearch(int,int *,int);
void Sort(int *,int);
int RecurBin(int ,int,int ,int *);

int main()
{
    int *arr,n,i,s,res;
    printf("Enter No of Elements in Array : ");
    scanf("%d",&n);
    arr = (int *) calloc(n,sizeof(int));
    printf("Enter %d Elements of Array \n",n);
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    printf("\nEnter Number to be Searched in Array : ");
    scanf("%d",&s);
    printf("\nresult of Linear Search :\n");
    res = LinearSearch(s,arr,n);
    (res == -1) ? (printf("Element Not Found\n")) : (printf("Element Found at index %d i.e, Position - %d\nNo of Key Comparisions = %d\n",res,res+1,Nokeys));
    printf("\nafter Sorting Array :\n");
	Sort(arr,n);
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
	printf("\nresult of Binary Search :\n");
    res = RecurBin(s,0,n,arr);
    (res == -1) ?printf("Element Not Found\n") : printf("Element Found at index %d i.e, Position - %d\nNo of Key Comparisions = %d\n",res,res+1,NoofKeys);
    getch();
    return 0;
}

int LinearSearch(int ele,int * a,int n){
    int i;
    for(i=0;i<n;i++)
    {
        Nokeys++;
        if(*(a+i)==ele)
            return i;
    }
    return -1;
}

void Sort(int *a,int n)
{
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(*(a+j) < *(a+i))
            {
                t = *(a+j);
                *(a+j) = *(a+i);
                *(a+i) = t;
            }
    }
}

int RecurBin(int ele,int low,int high,int *arr){
    int mid = (low+high)/2;
    if(low <= high){
        NoofKeys++;
        if(ele > *(arr+mid))
            return RecurBin(ele,mid+1,high,arr);
        else if(ele< *(arr+mid))
            return RecurBin(ele,low,mid-1,arr);
        else if(ele == *(arr+mid))
            return mid;
    }
    return -1;
}
