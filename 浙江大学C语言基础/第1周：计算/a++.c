#include <stdio.h>

int main()
{
    int a;
    int b;
    a = 10;
    b = 10;

    printf("a,b初始值均为10\n");
    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);
    printf("++b = %d\n", ++b);
    printf("b = %d\n", b);

    return 0;
}