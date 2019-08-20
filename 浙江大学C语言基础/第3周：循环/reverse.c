#include <stdio.h>

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