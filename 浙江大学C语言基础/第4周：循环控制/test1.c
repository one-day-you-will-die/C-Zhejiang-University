#include <stdio.h>

int main()
{
	int x;
	int i;
	int isPrime;
	int count = 0;
	int m,n;
	int output;

	scanf("%d %d", &n, &m);

	for (x = 2; count < m; x++){

		isPrime = 1;	
				
		//判断x是不是质数
		for (i = 2; i < x; ++i){
			if (x % i == 0){
				isPrime = 0;
				break;
			}
		}

		if (isPrime ==1){
			count ++;			//是质数，计数加一
			if (count >= n){
				//调试
				//printf("%d\n", x);
				output += x;
			}
		}
	}


	printf("%d\n", output);

	return 0;
}