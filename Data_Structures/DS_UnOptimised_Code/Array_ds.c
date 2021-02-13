#include <stdio.h>
#include <stdlib.h>


void insert(int arr[] ,int loc,int sub[])
{
    int i,j=0;
    //swifting
    for(i=len(arr)-1;i>=(loc-1);i--)
    {
        arr[len(sub)+i] = arr[i];
    }
    for(i=loc-1;i<(loc-1+len(sub));i++)
    {
        arr[i] = sub[j];
        j++;
    }
}

void del(int arr[] , int loc , int le)
{
    int i;
    for(i=loc-1;i<=len(arr)-le;i++)
    {
        arr[i] = arr[i+le];
    }
    for(i=len(arr)-le;i<le;i++)
    {
        arr[i] = NULL ;
    }
}

void traverse(int arr[])
{
    int i;
    printf("\nArray elements\n");
    for(i=0;i<len(arr);i++)
    {
        printf(" %d\t",arr[i]);
    }
    printf("\n");
}

int len(int arr[])
{
    int le=0,i=0;
    while(arr[i] != '\0')
    {
        i++;
        le++;
    }
    return le;
}



int main()
{
    int array[100]={},subarray[100]={},i,n,g,loc,k;
    printf("Enter No of Elements : ");
    scanf(" %d",&n);
    printf("Enter No the Elements \n");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&array[i]);
    }
    printf("\nArray Elements : ");
    traverse(array);


    while(1)
    {
        printf("\nOptions : \n\t1.Traverse the Array\n\t2.Inserting a Sub Array\n\t3.deleting a part of array\n\t0.Exit\n\nEnter the Option\n");
        scanf(" %d",&g);
        switch(g){
            case 1 :traverse(array);
                    break;
            case 2 :printf("Enter the location to insert sub array : ");
                    scanf(" %d",&loc);
                    printf("Enter no of elements to be inserted");
                    scanf(" %d",&k);
                    printf("Enter Elements : ");
                    for(i=0;i<k;i++)
                    {
                        scanf(" %d",&subarray[i]);
                    }
                    insert(array,loc,subarray);
                    break;
            case 3 :printf("Enter the location from where to delete elements from array : ");
                    scanf(" %d",&loc);
                    printf("Enter no of elements to be deleted from location : ");
                    scanf(" %d",&k);
                    del(array,loc,k);
                    break;
            case 0 :exit(0);
            default : printf("\nInvalid Input\n");
        }
    }
    return 0;
} 