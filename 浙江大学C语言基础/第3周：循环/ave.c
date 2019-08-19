#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;

    scanf("%d", &number);
    	while(number != -1){
    		sum += number;
    		count ++;
    		scanf("%d", &number);
    	}
  
	//以下为do - while循环结构。
    /*
    do{
    	scanf("%d", &number);
    	if(number != -1){
    		sum += number;
    		count ++;
    	}
    }while(number != -1);
	*/

    //不可以用%d，因为除出来的结果可能为小数。所以可以用1.0将数据变成浮点数。
    printf("%f\n", 1.0 * sum / count);

    return 0;
}