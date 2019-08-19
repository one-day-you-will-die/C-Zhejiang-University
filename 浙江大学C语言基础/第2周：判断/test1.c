#include <stdio.h>

int main()
{
    int input = 0;
    int output = 0;

    int BJT_hour = 0;
    int BJT_min = 0;
    int UTC_hour = 0;
    int UTC_min = 0;

    //读取BJT时间
    printf("请输入BJT时间\n");
    scanf("%d", &input);

    //计算BJT时间
    BJT_min = input % 100;
    BJT_hour = input / 100;

    //计算UTC时间
    UTC_min = BJT_min;
    UTC_hour = BJT_hour - 8;
    if (UTC_hour < 0)
    {
        UTC_hour = UTC_hour + 24;
    }

    //计算输出
    output = UTC_hour * 100 + UTC_min;
    printf("%d\n", output);
    
    return 0;
}