/* 辗转相除法
如果b等于0，计算结束，a就是最大公约数；
否则，计算a除以b的余数，让a等于b，而b等于余数；
回到第一步。

例：
a	b	t
12	18	12
18	12	6		当a < b 时，第一轮可交换顺序	
12	6	0
6	0
*/


#include <stdio.h>

int main()
{
	int a, b;
	int t;

	scanf("%d %d",&a, &b);
	while(b != 0){
		t = a%b;
		a = b;
		b = t;
	}

	printf("gcd = %d\n", a);

	return 0;
}


