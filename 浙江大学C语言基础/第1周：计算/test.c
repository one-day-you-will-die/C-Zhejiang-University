//初次尝试将第一位与第三位写反。%10用于取余，为最后一位。
//增加判断条件避免输入4位数时输出错误数据。

#include <stdio.h>

int main()
{
    int first_char = 0;
    int second_char = 0;
    int third_char = 0;
    int help_char = 0;
    int input = 0;
    int output = 0;

    printf("请输入一个正三位数：\n");
    scanf("%d", &input);

    if(input < 1000){
        first_char = input / 100;
        help_char = input / 10;
        second_char = help_char % 10;
        third_char = input % 10;

        output = third_char * 100 + second_char * 10 + first_char;
        //printf("%d\n", first_char);
        //printf("%d\n", second_char);
        //printf("%d\n", third_char);
        printf("%d\n", output);
    }
    else{
        printf("你输入的不是三位数.\n");
    }
    
    return 0;
}


//以下提供一种不限制位数的逆序输出
/*
int main()
{
    int x;
    scanf("%d", &x);
    //定义末位
    int digit;
    //定义output
    int ret = 0;

    while(x > 0){
        //取末尾
        digit = x%10;
        //下面一行代码逆序输出700为007，默认程序结果为7。
        //printf("%d\n", digit);
        ret = ret*10 + digit;
        //消末位
        x /= 10;
    }
    printf("%d\n", ret);

    return 0;
}
*/
