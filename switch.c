#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int age;

    printf("Hi College Student Enter Your age : ");
    scanf(" %d",&age);

    switch(age)
    {
        case 24 :printf("Dude... , Clear Backlogs !\n");
                    break;
        case 23 : printf("You should probably finish your degree till now !\n");
                    break;
        case 22 : printf("you are probably at final year\n");
                    break;
        case 21 : printf("You are Probably 3 rd Year\n");
                     break;
        case 20 :printf("You are Probably 2 nd year\n");
                    break;
        case 19 :printf("You are Probably 1 st year\n");
                    break;
        case 18 :printf("You are Probably Too Young\n");
                    break;
        default :printf("Are U Kidding Me - Only for College Students\n");
    }

    return 0;
}
