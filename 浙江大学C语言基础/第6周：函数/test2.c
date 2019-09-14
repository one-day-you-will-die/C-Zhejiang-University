#include <stdio.h>

int caculate(int n);
int main()
{
	int n, m;
	int count = 0;

	scanf("%d %d",&n, &m);

	for (int i = n; i <= m; i++)
	{
		if(caculate(i)){
			printf("%d ", i);
			count += 1;
		}
	}
	
	if(count == 0){
		printf("NIL");
	}

	printf("\n");

	return 0;
}




int caculate(int n)
{
	int ret = 0;
	int m = n;
	int sum = 0;


		for (int i = 1; i < m; i++)
		{
			if(m % i == 0){
				sum += i;
			}
		}




	if(n == sum){
		ret = 1;
	}

	return ret;
}
