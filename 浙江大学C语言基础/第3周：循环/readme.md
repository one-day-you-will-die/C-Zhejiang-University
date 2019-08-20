# 第三周
# 目录
## 知识点
## 各文件内容
- - - -
## 知识点
* if判断内容用大于来判断时，从高处往低处走
* 常用验证边界数据：`个位数，10，0，负数。`
* ` plus.c`文件为边界为0时的错误示例，同时提供了解决办法
* `do — while`循环在第一次进入时不做检查，执行完一轮后做检查。
* `launch.c`文件提供了一种分析循环次数的示例
* 用以下程序实现连续读入多个数，直到-1为止
```
do{
    	scanf("%d", &number);
    	if(number != -1){
    		
    	}
    }while(number != -1);
```
更好的方法
```
scanf("%d", &number);
    	while(number != -1){
    		
    		scanf("%d", &number);
    	}
```
* 以下代码的输出结果为-1   0   0.000000
```
int n = -1%2;
    int m = -1/2;
    double x = -1/2;
    printf("%d %d %f\n", n, m, x);
```
* 生成随机数代码
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a = rand();

    //通过取余限定a的位数，如取余100，则0<=a<100
    printf("%d\n", a%100);

    return 0;
}
```

## 各文件内容
* ` plus.c`文件为边界为0时的错误示例，同时提供了解决办法。
* `launch.c`文件提供了一种分析循环次数的示例。
* `ave.c`文件提供了while循环和do — while循环结构。同时实现了持续读取多个数，直至-1截止。
* `random.c`文件提供了一种生成随机数的方法。
* `reverse.c`文件提供了一种兼容不同位数输入的逆输出。
* `test1.c`为习题1答案。
* `test2.c`为习题2答案。
