#include <stdio.h>

int main()
{
    //定义变量
    int amount = 0;
    int price = 0;

    printf("请输入收款金额（元)");
    scanf("%d", &amount);
    printf("请输入货品金额（元)");
    scanf("%d", &price);
    
    int change = amount - price;
    
    if(amount >= price){
        printf("找您%d元。\n", change);
    }else{
        printf("你的钱不够\n");
    }
    return 0;
}
