#include <stdio.h>
#include <stdlib.h>
		
int main()
{
    int smoke;
    printf("do you smoke (Y/N) : ");
    scanf("%c",&smoke);
		
    // single if statements
    if(smoke =='y' || smoke == 'Y')
        printf("Stop smoking ASAP ,smoking kills\n\n");

    //nested if statements
    if (smoke == 'y' || smoke == 'Y'){
        if(smoke == 'y'){
            printf("I asked to enter Y or N , but u entered y , why ? :\/\n");
        }
    }
		
    return 0;
}
