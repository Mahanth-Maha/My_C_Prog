#include <stdio.h>
#include <stdlib.h>

int Rec_func(int n)
{
    int Res = 1;
    if(n == 0)
    {
        Res = Res*1;
    }
    else
    {
        Res = Rec_func(--n)*2;
    }
    return Res;
}


int main()
{
    int a;
    printf("Enter a integer to find out power of 2 recursively : ");
    scanf( " %d",&a);
    printf("\n2 power %d = %d\n",a,Rec_func(a));

    return 0;
}
