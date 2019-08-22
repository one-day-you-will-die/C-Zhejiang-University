/* 
输入一个非负整数，逆序输出它的每一位数字
输入：12345
输出：5 4 3 2 1
*/


#include <stdio.h>

int main()
{
	int x;
	scanf("d", &x);

	do{
		int d = x % 10；
		printf("%d\n", d);

		//输出数字间空格
		if(X >= 10){
			printf(" ");
		}

		x /= 10;
	}while( x > 0);
	printf("\n");

	return 0;
}


