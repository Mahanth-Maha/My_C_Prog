#include <stdio.h>
#include <stdlib.h>

int main()
{
    int No = 1;
    char app[50];
    FILE *csv_file;
    printf("Creating a Data Base in CSV");
    //opening or creating the file
    csv_file = fopen("test.csv","a");
    printf("\ncreated or opened the file\n");
    while(No != 0 )
    {
        printf("\nAppend a value to CSV (1 = append/0 = Exit)? : ");
        scanf(" %d",&No);
        fflush(stdin);
        if(No == 1)
        {
            gets(app);
            fputs(app,csv_file);
            fputs(",",csv_file);
        }
    }
    printf("\nclosing csv file");
    fclose(csv_file);
    return 0;
}