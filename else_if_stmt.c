#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter Your age : ");
    scanf(" %d",&age);
    //How to give ads to certain people
    if(age > 25){
        printf("You probably finished your Degree !\nWe will be showing some home products\n");
    }
    else if(age>18){
        printf("you probably studying your Degree! \nWe Will offer you some Personality dev. programs\n");
    }
    else if(age>14){
        printf("You are Probably a College Student \nWe will show you some college stationarys items\n");
    }
    else if(age>8){
        printf("You are Probably a School Student \nWe will Offer some School Bags and books\n");
    }
    else{
         printf("You are child\nWe will offer some toys and chocolates\n");
    }
    return 0;
}


