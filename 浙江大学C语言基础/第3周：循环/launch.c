#include <stdio.h>

int main()
{
    int n =3;

    while(n >= 0){
    //此程序执行n+1次循环，从n开始，最后输出结果为0，n为-1。
    //当更改以下两行顺序，仍执行n+1次循环，从n-1开始，最后输出结果为-1，n为-1。
        printf("%d\n", n);
        n--;
    }

    printf("发射\n");

    return 0;
}