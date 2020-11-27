#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("scanf() function\n");
    printf("Reading user input \n\n");

    //reading character data
    char ch;
    printf("Enter a Char : ");
    scanf(" %c" , &ch);
    printf("The Read Char Value = %c \t: c - read single char \n",ch);

    //read decimal data with d
    int x ;
    printf("Enter a integer value : ");
    scanf(" %d" , &x );
    printf("The Read int Value = %d \t: d - read integer \n",x);

    //read float value
    float f;
    printf("Enter a float value : ");
    scanf(" %f" , &f );
    printf("The Read float Value = %f \t: f - read float \n",f);

    //read string
    char str[50];
    printf("Enter a stirng : ");
    scanf("%s",str);
    printf("The Read int Value = %s \t: s - read string(first word up to space or an enter[new line])\n",str);

    return 0;
}
