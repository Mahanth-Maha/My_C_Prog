#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter Your age : ");
    scanf(" %d",&age);
    //Checking for Right to Vote
    (age<=17)?printf("\nYou Can't vote ! ( under 18 can't vote)"):printf("\nYou Can vote !");

    return 0;
}
