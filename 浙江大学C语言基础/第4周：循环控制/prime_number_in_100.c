#include <stdio.h>

int main()
{
	int x;
	int i = 1;
	int isPrime = 1;

	for (x = 2; x < 100; ++x)
	{

		for (i = 2; i < x; ++i)
		{

			isPrime = 1;	//一定要重置条件

			if (x % i == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime == 1)
		{
			printf("%d ", x);
		}
	}

	printf("\n");

	return 0;
}


