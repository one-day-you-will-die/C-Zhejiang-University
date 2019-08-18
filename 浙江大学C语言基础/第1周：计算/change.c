//
//  first week.c
//  
//
//  Created by 陈志春洋 on 2019/8/18.
//

#include "change.h"
#include <stdio.h>

int main()
{
    int price = 0;
    
    printf("请输入金额（元)");
    scanf("%d", &price);
    
    int change = 100 - price;
    
    printf("找您%d元\n", change);
    
    return 0;
}
