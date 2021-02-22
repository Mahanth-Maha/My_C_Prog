#include<stdio.h>

char S[50];
int top = -1;

void push(char );
char pop(void);
int priority(char );

int main()
{
    char exprArr[50];
    char *e, x;
    printf("\nInfix to PostFix Conversion Using Stack \n");
	printf("Enter the expression :");
    scanf("%s",exprArr);
    e = exprArr;
    while(*e)
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(S[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
        printf("%c",pop());
	getch();
	return 0;
}

void push(char c)
{
    S[++top] = c;
}

char pop(void)
{
    if(top == -1)
        return -1;
    return S[top--];
}

int priority(char c)
{
    if(c == '(')
        return 0;
    if(c == '+' || c == '-')
        return 1;
    if(c == '*' || c == '/')
        return 2;
}