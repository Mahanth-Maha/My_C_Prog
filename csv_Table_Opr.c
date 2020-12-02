#include <stdio.h>
#include <stdlib.h>

int main()
{
    int No = 1;
    char app[50];
    FILE *csv_file;
    printf("Creating a Data Base in CSV");
    //opening or creating the file
    csv_file = fopen("Student.csv","a");
    printf("\ncreated or opened the file\n");
    printf("\nCAUTION : If you are running this for first Time\n\tThen Enter Headings rather than Data\n");
    while(No != 0 )
    {
        printf("\nAppend a Student to CSV (1 = append/0 = No - Exit)? : ");
        scanf(" %d",&No);
        fflush(stdin);

        if(No == 1)
        {
            printf("\nEnter the Student RollNo : ");
            gets(app);
            fputs(app,csv_file);
            fputs(",",csv_file);
            printf("\nEnter the Student Name : ");
            gets(app);
            fputs(app,csv_file);
            fputs(",",csv_file);
            printf("\nEnter the Student Branch : ");
            gets(app);
            fputs(app,csv_file);
            fputs("\n",csv_file);
        }
    }
    printf("\nclosing csv file\n");
    fclose(csv_file);
    return 0;
}