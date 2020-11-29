#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long long k;
    k=1;
    printf("\n----Do You Know----\nif we fill the chess board by twice with grains for every box then the list will become :\n\n\nBasically printing power of 2s)\n\n");
    for(i=1;i<=64;i++){
        printf("%d\t%llu\n",i,k);
        k*=2;
    }
}


