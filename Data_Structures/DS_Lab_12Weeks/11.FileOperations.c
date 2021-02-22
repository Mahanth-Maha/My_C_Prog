#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("File Operations\n");
    int i=0;
    char s[5] = {'H','e','l','l','o'};
    char k;
    FILE *fp;
    fp = fopen("NewFile.txt","w");
    //File Created
    if(fp){
        while(s[i])
            putc(s[i++],fp);
    }
    else
        printf("No such File");
    putc('\n',fp);
    //Write
    printf("Enter - write to the FILE (STOP WRITING = CTRL+Z and Enter) :\n");
    while((k=getchar())!=EOF){
        putc(k,fp);
    }
    fclose(fp);
    //append
    fp = fopen("NewFile.txt","a");
    fputs("This Text is APPENDED",fp);
    fclose(fp);
    //read
    printf("\nContent in Text File:\n\n");
    fp = fopen("NewFile.txt","r");
    fseek(fp,SEEK_SET,0);
    while((k = getc(fp))!=EOF)
        putchar(k);
    //close
    fclose(fp);
    printf("\n\nFile Closed\n\n");
    getch();
    return 0;
}
