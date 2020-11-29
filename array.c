#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Over[6] ;
    int i,scr = 0;
    float rr;
    for(i=0;i<=5;i++){
        printf("Enter the Score for ball %d : ",i+1);
        scanf(" %d",&Over[i]);
        scr += Over[i];
    }
    rr =((float)scr / 6.0 )*100;
    printf("\nScore Card : ");
    for(i=0;i<=5;i++)
        printf("%d ",Over[i]);
    printf("\nThe total runs in the over is %d and Strike rate is %.2f",scr,rr);
}


