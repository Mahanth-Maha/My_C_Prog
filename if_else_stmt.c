#include <stdio.h>
#include <stdlib.h>

void binP(int);
int main()
{
    char license='n',llr='n',supervision='n';
    printf("do you Have a Driving license (Y/N) : ");
    scanf(" %c",&license);

    // single if statements
    if(license =='y' || license == 'Y')
        printf("\nYou Can Drive !\n");
    else{
        printf("\nDo You Have LLR (Y/N) : ");
        scanf(" %c",&llr);
    }
    //nested if statements
    if(llr == 'y' || llr == 'Y'){
        printf("\nDo You Have any SuperVision (Y/N) : ");
        scanf(" %c",&supervision);
        if(supervision == 'y' || supervision == 'Y'){
                printf("You Can Drive ");
            }
        else{
            printf("You Can Drive only when there is a supervision!\n");
        }
    }else{
        if(!(license =='y' ||license == 'Y')){
            printf("\nYou Can't Drive ,Until You get an LLR !\n");
        }
    }


    return 0;
}