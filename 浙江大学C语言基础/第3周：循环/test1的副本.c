#include <stdio.h>

int main()
{
    int input = 0;
    int output_1 = 0;
    int output_2 = 0;

    printf("请输入数字，直至-1结束\n");

    while(input != -1){
        scanf("%d", &input);

/* 
如果采用如下代码，会因为input初始值为0走一遍while程序。
scanf会将input赋为-1.从而不满足if条件，output会+1。
if (input % 2 == 0)
        {
            output_2++;
        }else{
            output_1++;
        }
*/
        
        if (input % 2 == 0)
        {
            output_2++;
        }else if (input % 2 == 1){
            output_1++;
        }
    }
    
    printf("%d %d\n", output_1 , output_2);
    return 0;
}