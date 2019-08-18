#include <stdio.h>

//AMOUNT为常量
/*

int main()
{
	//定义常量
	const int AMOUNT = 100;
    //定义变量
    int price = 0;
    
    printf("请输入金额（元)");
    scanf("%d", &price);
    
    int change = AMOUNT - price;
    
    printf("找您%d元。\n", change);
    
    return 0;
}

*/

//AMOUNT为用户输入量

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
    
    printf("找您%d元。\n", change);
    
    return 0;
}
