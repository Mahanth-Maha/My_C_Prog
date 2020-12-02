#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=544;
    printf("declared a as int with int a = %d",a);
    typedef int i;
    i b = 999;
    printf("\ndefined int as i and declaring b as int with i\nas i b = %d",b);
    printf("\n\nadding both  and to ensure same type : %d + %d = %d \n",a,b,a+b);
    return 0;
}



