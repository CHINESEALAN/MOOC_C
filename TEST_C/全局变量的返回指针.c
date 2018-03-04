#include<stdio.h>
int  *h();
void f();
int  main()
{
	int *p = h();
	printf("%d\n",*p);
	h();
	f();
	printf("%d\n",*p);//窗口输出 数值 12，因为 返回本地变量的地址 
					//在其他函数调用会在用同一个地址存储覆盖  那么就会输出 f()函数的数值 12 
	return 0;
 } 
 int * h()
 {
 	int a = 10;
 	printf("h()a的地址 = %p\n",&a);
 	return &a;
 }
 void f()
 {
 	int k =12;
 	printf("f()k的地址 = %p\n",&k);//%p的 格式要记住 取地址符 
  } 

