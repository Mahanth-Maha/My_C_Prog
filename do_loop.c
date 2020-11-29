#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i=0,n;
    printf("\n\t\tTimer\n\n");
    printf("Enter time to count down in sec : ");
    scanf("%d",&n);
    do{
        printf("%d\n",n--);
        sleep(1);
    }while(n!=0);
    printf("\nTimeUp !\n");
    return 0;
}


