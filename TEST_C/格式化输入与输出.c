
//**********格式化输入输出************************ 
#include<stdio.h>
int main()
{	
	printf("%8.2d\n",123);// 8.2表示 _ _123.00  整个占据9位 
	printf("%*d\n",4,123);//表示 下一个参数是 字符数 (4代替*)
	{	int len;	
		scanf("%d",&len); 
		printf("%*d\n",len,123);//可以自定义 参数 
								//给程序带来灵活性 
	} 
	printf("%hhd\n",123);//hh 表示 char 代表一个字节 
	printf("%08d\n",123);// 0 表示 强制添0 
	printf("%+8d\n",123);//	+表示 强制输出 +号 
	printf("%8d\n",123);//右对齐 
	printf("%-8d\n",123);//加- 表示 左对齐 
	int a,b;
	scanf("%*d%d",&a); //表示 输入跳过 
	printf("%d",a);
	scanf("%i",&b); //表示 8or10or16进制输入, 
	printf("%d",b);//以10进制输出 
	return 0;
 } 

