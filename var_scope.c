#include <stdio.h>
#include <stdlib.h>

void func_a_declared()
{
    int a;
    a = 44;
    printf("In func_a_declared\n\tdefined Var 'a' here as 44  - value = %d\n",a);
}

void func_a_not_decl(int a)
{
    printf("In func_a_not_decl\n\tnot defined Var 'a' here inherited from main - value = %d\n",a);
}

int main()
{
    int a;
    a = 544;
    printf("In main\n\tdefined Var 'a' here as 544 - value = %d\n",a);
    func_a_declared();
    func_a_not_decl(a);
    return 0;
}


