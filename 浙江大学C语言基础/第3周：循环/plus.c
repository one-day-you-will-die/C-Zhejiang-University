#include <stdio.h>

int main()
{
    int x;
    int n =0;

    scanf("%d", &x);

    //若没有以下两行代码，程序在正整数成立，但是n的最小值为0，
    //不适用于x=0时，因为数字最小位数为1.
    n++;
    x /= 10;    

    while(x > 0){
        n++;
        x /= 10;
    }
    printf("%d\n", n);

    return 0;
}