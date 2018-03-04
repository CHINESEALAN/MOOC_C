#include<stdio.h>
void  view();
void f();
void b();
int  main()
{
//	int gAll = 0;//给本地变量做	初始化  
//	printf("gAll:%d\n",gAll);
//	view();
//	int a;
//	a=a+1;
//	printf("%d",a); 
	f();
	b();
//	f();
//	int a = 0;
//	a+=1;
//	printf("%d",a);
	return 0;
 } 
void f()
{	static int a = 1;//static声明后a为全局变量 但是针对函数内是初始化 1 次,再次调用时结束值
					//其他函数 不可以调用此值 
	printf("%p\n",&a);
//	printf("%d\n",a);
//	a +=1;
//	printf("%d\n",a);
}
void b()
{
	a+=1;//static声明后a为全局变量 但是针对函数内是初始化 1 次,再次调用时结束值
		//而对于其他函数   此全局变量a = 0 
	printf("%d",a);
}
void view()
 {	int a = 1;
 	{
	static	int a = 2;
	printf("%d",a); 
 	printf("%s",__func__);//打印当前函数的名字view	 
 	}
 }
