#include <stdio.h>
#include <stdlib.h>

void call_by_value(int m,int n)
{
    int temp;
    printf("Passed %d and %d",m,n);
    temp = m;
    m=n;
    n= temp;
    printf("\nSwapped to %d and %d",m,n);
    printf("\n\tIn call_by_value func - swapped");
}


void call_by_ref(int *m,int *n)
{
    int temp;
    printf("Passed %d and %d",m,n);
    temp = *m;
    *m = *n;
    *n = temp;
    printf("\nSwapped to %d and %d",m,n);
    printf("\n\tIn call_by_ref func - swapped");
}

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf(" %d %d",&a ,&b);
    printf("\na = %d and b = %d \n",a,b);
    printf("\nCalling a function - call by value to do swap\n");
    call_by_value(a,b);
    printf("\na = %d and b = %d \n",a,b);

    printf("\nCalling a function - call by Reference to do swap\n");
    call_by_ref(&a,&b);

    printf("\na = %d and b = %d \n",a,b);

    return 0;
}