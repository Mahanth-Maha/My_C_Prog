#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gc;

   //read the char with getchar and print it with putchar
    printf("read the char with getchar and print it with putchar\n\n");
    printf("Enter a Char : ");
    gc = getchar();
    printf("You Entered Char is ");
    putchar(gc);

    return 0;
}
