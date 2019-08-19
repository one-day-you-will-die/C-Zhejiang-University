#include <stdio.h>

//复杂代码
/*
int main()
{
    int a, b;

    printf("请输入两个整数：\n");
    scanf("%d %d", &a, &b);

    int max = 0;
    if(a > b){
        max = a;
    }else{
        max = b;
    }

    printf("大的那个是%d\n", max);
    return 0;
}
*/

//精简代码
int main()
{
    int a, b;

    printf("请输入两个整数：\n");
    scanf("%d %d", &a, &b);

    int max = b;
    if(a > b){
        max = a;
    }

    printf("大的那个是%d\n", max);
    return 0;
}