#include<stdio.h>

int stack[50];
int top = -1;

void push(int );
int pop(void);

int main()
{
    char exp[50] , *e;
    int n1,n2,n3,num;
    printf("Enter the expression : ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e)
            {
                case '+':n3 = n1 + n2;break;
                case '-':n3 = n2 - n1;break;
                case '*':n3 = n1 * n2;break;
                case '/':n3 = n2 / n1;break;
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of expression %s = %d\n\n",exp,pop());
	getch();
    return 0;
}

void push(int x)
{
    stack[++top] = x;
}

int pop(void)
{
	if(top == -1)
		return -1;
    return stack[top--];
}