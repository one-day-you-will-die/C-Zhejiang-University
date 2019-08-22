#include <stdio.h>

int main()
{
	int x = 0;
	int i = 1;
	int isPrime = 1;

	scanf("%d", &x);

	for (int i = 2; i < x; ++i)
	{
		if (x % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 1)
	{
		printf("%d是素数\n", x);
	}else{
		printf("%d不是素数\n", x);
	}

	return 0;
}


