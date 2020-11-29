#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R,O;
    float RR ;

    printf("\nEnter Current Score : ",R);
    scanf(" %d",&R );
    printf("\nEnter Overs Finished (int Only) :",&O);
    scanf(" %d",&O);

    RR = (float)R / (float)O ;
    printf("\nCurrent Runrate is %.2f\n",RR);

    return 0;
}


