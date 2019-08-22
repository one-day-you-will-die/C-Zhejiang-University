#include <stdio.h>

int main()
{
	int x = 2;
	int i = 1;
	int isPrime = 1;
	int count = 0;

	while(count < 50)
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
			count ++;
		}

		x++;	//勿忘
	}

	printf("\n");

	return 0;
}


