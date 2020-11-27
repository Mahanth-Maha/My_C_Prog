#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gs[50];

    //read the str with gets and print it with puts
    printf("read the str with gets and print it with puts\n\n");
    printf("Enter a String : ");
    gets(gs);
    printf("You Entered String is ");
    puts(gs);

    return 0;
}
