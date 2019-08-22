/* 
输入一个非负整数，正序输出它的每一位数字
输入：12345
输出：1 2 3 4 5
*/


#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);

	int mask = 1; //x要除的数，得出x的第一位
	int t = x; //因为下面还要用到x,所以不能改变x的值

	//计算mask，采用while循环避免x<10情况下mask = 10
	while（t > 9){
	t /= 10;
	mask *= 10;
}


	do{
		int d = x / mask;
		printf("%d\n", d);	//输出首位

		//输出空格
		if(mask >= 10){		//此处不可以使用x,若x = 1000，后三个0之间会没有空格
			printf(" ");
		}

		x %= mask;
		mask /= 10;

	}while (mask >0);  		//此处不可以使用x，因为x %= mask可以为0

	return 0;
}


