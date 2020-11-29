#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i=0,n;
    printf("Break is to Stop\n");
    printf("Continue is to Skip\n");

    for(i=1;i<=10;i++)
    {
        printf("%d \t",i);
        if(i==7){
            printf("Breaking at 7\n");
            break;
        }

    }
    i=0;
    while(i<=10)
    {
        if((i)%3==0){
            i++;
            continue;
        }
        printf("%d \t",i++);
    }
    printf("Skipping 3 multiples\n");
    return 0;
}
