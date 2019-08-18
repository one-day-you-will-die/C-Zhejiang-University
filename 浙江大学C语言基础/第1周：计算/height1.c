#include <stdio.h>

int main()
{
    printf("请分别输入身高的英尺和英寸，"
    	"如输入\'5 7\'表示5英尺7英寸:");

    int foot;
    int inch;

    scanf("%d %d", &foot, &inch);

    printf("你的身高是%f米。\n",
    	((foot + inch / 12) * 0.3048));

    return 0;
}

//此程序英寸未起作用，因在未定义浮点数的情况下，inch / 12 == 0；
//未定义浮点数时，所有小数点后面内容被省略，无四舍五入。
//将12改为12.0可解决。
