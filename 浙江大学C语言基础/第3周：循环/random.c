#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a = rand();

    //通过取余限定a的位数，如取余100，则0<=a<100
    printf("%d\n", a%100);

    return 0;
}