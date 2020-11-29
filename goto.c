#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i=0,n;
    printf("Do you want to take quiz(Y/N)\n");
    scanf("%c",&n);
    if(n=='n' || n=='N')
    {
        goto END;
    }
    printf("Quiz...Loading\n");
    END : printf("Actually , Participation is more than wining so you won !");

    return 0;
}


