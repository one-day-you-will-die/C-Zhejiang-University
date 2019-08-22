#include <stdio.h>

int main()
{
	int n = 0;

	scanf("%d", &n);
	int fact = 1;
	
	int i = 1;

	/*
	while(i <= n){
		fact *= i;
		i++;
	}
	*/

	for (i = 1; i <= n; ++i)
	//for (i = n; i > 1; i--)
	{
		fact *= i;
	}	


	printf("%d! = %d\n", n, fact);

	return 0;
}


