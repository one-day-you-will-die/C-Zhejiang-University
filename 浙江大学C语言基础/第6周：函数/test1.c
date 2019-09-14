#include <stdio.h>

int isPrime(int i);
void devide(int input);

int main()
{

	int input = 0;

	scanf("%d", &input);
	if(isPrime(input)){
		printf("%d=%d\n", input, input);
	}else{
		printf("%d=", input);
		devide(input);
		printf("\n");
		}
		
	return 0;
}


int isPrime(int i)
{
	int ret = 1;
	int k;
	for(k = 2; k < i-1; k++){
		if (i % k == 0){
			ret = 0;
			break;
		}
	}
	return ret;
}


void devide(int input)
{
	int m;
	//输出首位因数
	for (int i = 2; i < input; i++)
		{
			if(input % i == 0){
				printf("%d", i);
				m = i;
				break;
			}
		}

		//输出剩余因数	
	do{
		input /= m;
		for (int i = 2; i <= input; i++)
			{
				if(input % i == 0){
					m = i;
					printf("x%d", i);
					break;
				}
			}
	}while(input > 1);
}

