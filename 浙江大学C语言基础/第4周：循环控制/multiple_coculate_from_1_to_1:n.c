#include <stdio.h>

int main()
{
	int n = 0;
	double sum = 0.0;
	int sign = 1;

	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		sum += sign*1.0/i; 	//记得使用1.0将结果变为浮点数
		sign = - sign;
		//可以直接将sign定义为1.0，这样可省略第12行的1.0
	}
	
	printf("f(%d) = %f\n", n, sum);

	return 0;
}


