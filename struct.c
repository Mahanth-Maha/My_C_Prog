#include <stdio.h>
#include <stdlib.h>

struct email{
    int num;
    char address[200];
    char name[100];
    char company[100];
};


int main()
{
    int i=0,n=0;
    int store=1;
    struct email per[10];
    printf("Credentials Storing \n");
    do{
        printf("Enter Person id : ");
        scanf("%d",&per[i].num);
        printf("Enter email address of %d : ",per[i].num);
        scanf(" %s",per[i].address);
        printf("Enter name of %d : ",per[i].num);
        scanf(" %s",per[i].name);
        printf("Enter company of %d : ",per[i].num);
        scanf(" %s",per[i].company);

        store = 0;
        printf("\nAnother Entry (Yes-1/No-0) : ");
        scanf(" %d",&store);
        i++;
        n++;
    }while(store!=0);
    printf("Employee details : \n\n");
    for(i=0;i<n;i++){
        printf("ID :%d\t",per[i].num);
        printf("Email :%s\n",per[i].address);
        printf("Name :%s\t",per[i].name);
        printf("Company :%s\n\n",per[i].company);
    }
}