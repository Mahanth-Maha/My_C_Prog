#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("printf() function\n");
    printf("Format Specifiers \n\n");

    //printing character data
    char ch = 'M';
    printf("M = %c : c - Char\n", ch);

    //print decimal data with d - signed integer
    int x = 544, y = -44;
    printf("%d <-signed-> %d : d - signed integer\n", x,y);
    printf("%i : i - Unsigned integer\n", x,y);
    //print in scientific notation
    float f = 13.18;
    printf("13.18 = %e \t\t: e - scientific notation\n", f);
    //print float value
    printf("13.18 = %f \t\t: f - float value\n", f);
    //print in octal format
    int a = 44;
    printf("%d = %o \t\t: o - octal format\n", a, a);
    //print in hex format
    printf("%d = %x \t\t: x - hex format\n", a, a);

    char str[] = "Mahanth Maha";
    printf("%s : s - Full String\n", str);
    printf("%9s : #s - shift cursor to the right #(9) characters\n", str);
    printf("%-9s : -#s - shift cursor to the left #(9) characters \n", str);
    printf("%9.5s : #.$s - shift cursor to the right #(9) characters and Print string up to $ chars\n", str);
    printf("%-9.5s : -#.$s - shift cursor to the left #(9) characters and Print string up to $ chars\n\n", str);
    return 0;
}
