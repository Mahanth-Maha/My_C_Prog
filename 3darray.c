#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Over[2][2][6] ;
    int i,j,k,scr[2],win;
    float rr[2];
    scr[0] = 0 ;
    scr[1] = 0 ;

    printf("welcome to 2 - 2 overs Match \n");

    for(i=0;i<2;i++){
        printf("\n\nInnings %d Team %d\n\n",i+1,i+1);
        for(j=0;j<2;j++){
            for(k=0;k<6;k++){
                printf("Enter the Score for innings %d over %d - ball %d : ",i+1,j,k+1);
                scanf(" %d",&Over[i][j][k]);
                scr[i] += Over[i][j][k];

            }
        }
        rr[i] =((float)scr[i] / 6.0 );
    }


    printf("\nScore Card : \n");
    for(i=0;i<2;i++){
        printf("\nInnings %d Team %d\n",i+1,i+1);
        for(j=0;j<2;j++){
            printf("Over - %d : ",j+1 );
            for(k=0;k<6;k++){
                printf("%d ",Over[i][j][k]);
            }
            printf("\n");
        }
        printf("\nThe Total Score is %d \nNet Run rate is %.2f\n",scr[i],rr[i]);
    }
    if(scr[0]>scr[1]){win = 1;}
    else{win = 2;}
    printf("\nwinner is team %d\n" ,win);
}

