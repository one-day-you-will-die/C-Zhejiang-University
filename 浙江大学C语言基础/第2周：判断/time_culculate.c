#include <stdio.h>

int main()
{
    int hour1, minute1;
    int hour2, minute2;

    printf("请输入起始时间");
    scanf("%d %d", &hour1, &minute1);

    printf("请输入结束时间");
    scanf("%d %d", &hour2, &minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;

    if( im < 0){
        im = 60 + im;
        ih --;
    }

    printf("时间差是%d小时%d分钟。\n", ih, im);

    return 0;
}