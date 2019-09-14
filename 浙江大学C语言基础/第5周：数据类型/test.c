#include <stdio.h>

int main()
{
	
	int a = 0;
	int b = 0;
	int output = 0;
	int yushu = 0;	//余数
	int count = 0;

	scanf("%d %d", &a, &b);
	output = a / b;
	printf("%d", output);		//输出首位

	//其实题目条件10<= a < b <= 100意味着首位一定未整除
	//若首位未整除，输出小数点，计算小数点位
	if(a % b != 0){
		printf(".");
	
	yushu = a % b;

	do{		
		a = yushu * 10;
		output = a / b;
		printf("%d", output);
		count ++;
		//余数计算应出现在a/b之后，所以才将此行单独列出在line21，
		//而不是do循环的第一行
		yushu = a % b;
	}while(count != 200 && yushu != 0);	  //思考这里为什么用&&
	}

	printf("\n");

	return 0;
}


