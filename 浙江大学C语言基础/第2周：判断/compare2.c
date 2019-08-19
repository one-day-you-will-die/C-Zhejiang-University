#include <stdio.h>

//无大括号的if - else语句

int main()
{
    int a, b;

    printf("请输入两个整数：\n");
    scanf("%d %d", &a, &b);

    int max = 0;
    if(a > b)
        max = a;
    else
        max = b;
    

    printf("大的那个是%d\n", max);
    return 0;
}
