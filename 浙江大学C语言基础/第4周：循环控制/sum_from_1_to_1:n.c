#include <stdio.h>

int main()
{
	int n = 0;
	double sum = 0.0;

	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		sum += 1.0/i; 	//记得使用1.0将结果变为浮点数
	}
	
	printf("f(%d) = %f\n", n, sum);

	return 0;
}


