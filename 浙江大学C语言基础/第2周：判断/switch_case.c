#include <stdio.h>

int main()
{
    int type;

    printf("请输入1-3\n");
    scanf("%d", &type);

    switch(type){

    case 1:
        printf("你好\n");
        break;
    case 2:
        printf("早上好\n");
        break;
    case 3:
        printf("晚上好\n");
        break;
    default:
        printf("你输错了\n");
        break;
    }
    return 0;
}