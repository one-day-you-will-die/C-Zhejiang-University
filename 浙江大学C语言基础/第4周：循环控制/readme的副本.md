# 第四周
# 目录
## 知识点
## 各文件内容
- - - -
## 知识点
* while循环与for循环
```
	while(i <= n){
		fact *= i;
		i++;
```

```
for (i = 1; i <= n; ++i)
	{
		fact * = i;
	}
```
* 对于for循环
```
for (初始条件; 循环继续的条件; 对初始条件做更改）
```
* 做求和时，初始变量应为0，做求积时，初始变量应为1
* 当i在for循环被重新定义后
```
int i = 1;
for (int i = 1; i <= n; ++i)
{
		fact *= i;
	}	
printf("i = %d\n", i);
```
i的打印值为1
* 当for循环中的i未被定义时
```
int i = 1;
for (int i = 1; i <= n; ++i)
{
		fact *= i;
	}	
printf("i = %d\n", i);
```
i的打印值为n+1
* 关于`for (i = 0; i < n; i++)`，循环次数为n，循环结束后i = n
* 循环结束后，`初始条件的值`变为`循环继续的条件的终值`再被更改一次
* for循环中的每一个表达式都是可以省略的
```
for (; 条件;) == while(条件）
```
* 关于循环
```
如果有固定此时，用for循环
如果必须执行一次，用do — while循环
其他情况用while循环
```
* 关于break和continue
```
break：跳出循环
continue：跳过此轮循环剩下的语句进入下一轮循环
```
* 多重循环接力break
```
int exit = 0;
for (int i = 0; i < count; ++i)
{
	for (int j = 0; j < count; ++j)
	{
		for (int m = 0; m < count; ++m)
		{
			if (/* condition */)
			{
				/* code */
				exit = 1;
				break;
			}
		}
		if (exit ==1) break;
	}
	if (exit ==1) break;
}
```
* goto
```
int exit = 0;
for (int i = 0; i < count; ++i)
{
	for (int j = 0; j < count; ++j)
	{
		for (int m = 0; m < count; ++m)
		{
			if (/* condition */)
			{
				/* code */
				goto out;
			}
		}
	}
}
out:
```

## 各文件内容
* `while_and_for.c`文件为while循环和for循环的对比。
* `prime_number.c`文件为判断输入数字是否为质数。
* `prime_number_in_100.c`文件为输出100以内的质数。
* `first_50_prime_number.c`文件为输出前50个质数。
* `one_two_five.c`文件为使用0.1,0.2,0.5枚举凑出输入数字。仍待改进。
* `sum_from_1_to_1/n.c`文件为1到1/n的多项式求和。
* `multiple_coculate_from_1_to_1/n.c`文件为n为偶数时分母为正，n为奇数时，分母为负的1到1/n的多项式求和。
* `gcd.c`文件为辗转相除法求最大公约数。
* `devide_number.c`文件为正序分解输出输入数字。
* `reverse_devide_number.c`文件为逆序分解输出输入数字。
* `test1.c`为习题1答案。
* `test2.c`为习题2答案。