#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Over[5][6] ;
    int i,j,scr = 0;
    float rr;
    printf("welcome to 5 overs innings \n");

    for(i=0;i<5;i++){
        for(j=0;j<=5;j++){
            printf("Enter the Score for over %d - ball %d : ",i,j+1);
            scanf(" %d",&Over[i][j]);
            scr += Over[i][j];
        }
    }

    rr =((float)scr / 6.0 );
    printf("\nScore Card : \n");

    for(i=0;i<5;i++){
        printf("Over - %d : ",i );
        for(j=0;j<=5;j++){
            printf("%d ",Over[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe Total Score is %d \nNet Run rate is %.2f\n",scr,rr);
}