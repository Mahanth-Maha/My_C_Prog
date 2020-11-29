#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i=0,k='n';
    int Run = 1;
    while(Run){
        printf("\n\nHacking Nasa - Init !!!\n\n");
        while(i<6){
            printf("Hacking Nasa");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(2);
            printf("%d %s\n",i++*20,"%");

        }
        printf("Nasa Has been Hacked !\n");
        printf("\n\nIf didn't get the access , init again(Y/N) : ");
        scanf(" %c",&k);
        Run = 0;
        if(k=='y' || k== 'Y'){
            Run = 1;
            i=0;
        }
    }
    return 0;
}