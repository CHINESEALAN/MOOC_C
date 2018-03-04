#ifndef __MAX_H_//如果没有定义 。。。。头文件 
#define __MAX_H_//则定义  。。。这个头文件 

double max(double a,double b);
extern double i;//变量的声明  表示 i是个全局变量,哪个文件都可以用 
//int i 是 变量的 定义


struct Node{
	int value;
	char *name; 
};

#endif//结束语 

// 整个 叫做 标准头文件结构 
// 目的:  保证这个头文件 在一个编译单元(.c)文件中 只被编译一次 

