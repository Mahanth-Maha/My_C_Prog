#include <stdio.h>
#include <stdlib.h>

void binP(int);
int main()
{
    printf("Operators in C \n\n");

    int a = 123,b = 456;
    printf("a = %d and b = %d \n\n",a,b);

    printf("Arithmetic Operators\n");

    printf("+ operator : a+b = %d \n",a+b);
    printf("- operator : b-a = %d \n",b-a);
    printf("* operator : a*b = %d \n",a*b);
    printf("/ operator : b/a = %d \n",b/a);
    printf("Mod operator : b Mod a = %d \n",b%a);


    printf("\nIncrement and Decrement Operators\n");

    printf("\na = %d and b = %d \n",a,b);
    printf("++ operator : a++ = %d \n",a++);
    printf("++ operator : ++b = %d \n",++b);

    printf("\na = %d and b = %d \n",a,b);
    printf("-- operator : a-- = %d \n",a--);
    printf("-- operator : --b = %d \n",--b);

    printf("\na = %d and b = %d \n",a,b);


    printf("\nAssignment Operators\n");

    printf("\na = %d and b = %d \n",a,b);
    printf("= operator : (a =333) = %d \n",a=333);
    printf("\na = %d and b = %d \n",a,b);
    printf("+= operator : (b+=44) = %d \n",b+=44);
    printf("\na = %d and b = %d \n",a,b);
    printf("-= operator : (b-=a) = %d \n",b-=a);
    printf("\na = %d and b = %d \n",a,b);
    printf("*= operator : (a*=2) = %d \n",a*=2);
    printf("\na = %d and b = %d \n",a,b);
    printf("/= operator : (a/=2) = %d \n",a/=2);
    printf("\na = %d and b = %d \n",a,b);
    printf("Mod= operator : (bMod=21) = %d \n",b%=21);
    printf("\na = %d and b = %d \n",a,b);


    printf("\nRelational Operators\n");
    int c=10 , d=20 , e=30 , f=40;
    printf("True = 1 and False = 0 always\n\n");
    printf("c = %d , d = %d \n",c,d);
    printf("== operator : (c==d/2) = %d \n",c==d/2);
    printf("!= operator : (c!=d) = %d \n",c!=d);
    printf("> operator : (c>d) = %d \n",c>d);
    printf("< operator : (c<d) = %d \n",c<d);
    printf(">= operator : (2*c>=d) = %d \n",2*c>=d);
    printf("<= operator : (c<=2*d) = %d \n",c<=2*d);

    printf("\nLogical Operators\n");

    printf("c = %d , d = %d , e = %d , f = %d \n\n",c,d,e,f);
    printf("&& operator : (2*c==d && 2*c==e) = %d \n",(2*c==d && 2*c==e));
    printf("|| operator : (2*c==d || 2*c==f) = %d \n",(2*c==d || 2*c==f));
    printf("! operator : (!(c==f)) = %d \n",!(c==f));

    printf("\nBitwise Operators\n");

    a = 20;
    b = 40;

    printf("a=%d == ",a);
    binP(a);
    printf(" and b=%d == ",b);
    binP(b);
    printf("\n");

    printf("& operator : a&1 = %d \n ",a&1);

    printf("| operator : b|1 = %d \n",b|1);

    printf("^ operator : a^1 = %d \n",a^1);


    printf("~ operator : b~ = %d \n",~b);

    printf(">> operator :a>>1 = %d \n",a>>1);

    printf("<< operator :b<<1 = %d \n",b<<1);


    return 0;
}

void binP(int n){
    while (n) {
        if (n & 1)
            printf("1");
        else
            printf("0");
        n >>= 1;
    }
}
