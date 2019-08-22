#include <stdio.h>




void read(int number)
{
	switch(number){
		case 0:
		printf("ling");
		break;

		case 1:
		printf("yi");
		break;

		case 2:
		printf("er");
		break;

		case 3:
		printf("san");
		break;

		case 4:
		printf("si");
		break;

		case 5:
		printf("wu");
		break;

		case 6:
		printf("liu");
		break;

		case 7:
		printf("qi");
		break;

		case 8:
		printf("ba");
		break;

		case 9:
		printf("jiu");
		break;

	}

}



int main()
{
	int input = 0;
	int number = 0;
	int mask = 1;
	int t;

	//读入
	scanf("%d", &input);

	//负数特殊处理
	if (input < 0){
		printf("fu ");
		input = -1 * input;
	}

	//计算mask，采用while循环避免input<10情况下mask = 10
	t = input;
	while(t > 9){
	t /= 10;
	mask *= 10;
}

	//分解
	do{
		number = input / mask;
		read(number);

		//输出空格
		if(mask >= 10){		
			printf(" ");
		}

		input %= mask;
		mask /= 10;
	}while (mask >0);

	printf("\n");

	return 0;
}
