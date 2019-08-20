#include <stdio.h>

int main()
{
    int input = 0;      //定义输入
    int output = 0;     //定义输出
    int last_char = 0;  //定义取出的最后一位
    int count = 1;      //定义位数
    int times = 0;
    int binary_number = 1;  //定义二进制位值（1/2/4/8/16/32...)
    int same = 0;           //定义奇偶一致性
    int last_char_odd_or_even = 0;  //奇为1，偶为0
    int count_odd_or_even = 0;      //奇为1，偶为0

    //读取数字
    scanf("%d", &input);

    //进入循环
    do{

        //取最后一位数
        last_char = input % 10;

        //判断数字奇偶
        if(last_char % 2 == 0){
            last_char_odd_or_even = 0;
        }else{
            last_char_odd_or_even = 1;
        }

        //判断数位奇偶
        if(count % 2 == 0){
            count_odd_or_even = 0;
        }else{
            count_odd_or_even = 1;
        }

        //判断奇偶一致
        if(last_char_odd_or_even == count_odd_or_even){
            same = 1;
        }else{
            same = 0;
        }


        //计算二进制位值
        times = count;
        while(times > 1){
            binary_number = binary_number * 2;
            times --;
        }

        //计算输出
        output = output + same * binary_number;

        //调试    printf("count = %d\n", count);
        //调试    printf("same = %d\n", same);
        //调试    printf("binary_number = %d\n", binary_number);
        //调试    printf("output = %d\n", output);

        //消去最后一位数
        input /= 10;

        //计数++
        count ++;

        //binary_number清1   //编者注，死在这里了两个小时，其他一遍过，哭了
        binary_number = 1; 

    }while(input != 0);

    //输出
    printf("%d\n", output);

    return 0;
}