#include<stdio.h>
void f();
void b();
int qunju = 5;
int  main()
{
	f();
	f();
	b();

	return 0;
 } 
void f()
{	static int a = 1;//static声明后a为全局变量 但是针对函数内是初始化 1 次,再次调用时结束值
				//其他函数 不可以调用此值 
 			      //概括就是 全局变量是  全局的生存期 本地的作用域
 				//全局变量呢   地址都是放在一起的 一次排列 而 对于局部变量他存放的地址 和 全局变量的地址有很大的差别
	printf("%d\n",a);
	printf("地址 = %p\n%p\n",&a,&quanju);
 	a+=1;
 	printf("%d\n",a);
}
void b()
{	
	//cishi
}
void view()
 {	int a = 1;
 	{
	static	int a = 2;
	printf("%d",a); 
 	printf("%s",__func__);//打印当前函数的名字view	 
 	}
 }
