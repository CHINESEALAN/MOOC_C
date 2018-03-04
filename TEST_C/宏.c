#include<stdio.h>
#//头文件中的 # 表示编译预处理指令->指 计算机在编译之前会做 一遍的预处理 
#define PI 3.14159
//#define  是定义一个 宏 名字是PI 数值为 3.14159 
#define format "  %f\n" //成立 后边一般不加； 因为他不是 c的语句 
					//名字必须是 一个 单词  ， 值可以是任何东西 
#define PI2 2*PI					
#define PRT  printf("%f  ",PI);\
		printf("%f",PI2) // \ 的后边不可以注释  以为 程序会认为这后边加上 代码是 一起注释 所以错误
		//  加入 \ 表示 下边的printf是 上个 函数的一部分 					
int main()
{	
	printf("%s:%d",__FILE__,__LINE__); 
	printf("%s,%s\n",__DATE__,__TIME__);

	PRT;
	printf(format,PI); 
	return 0; 
 } 
 // 预定义的 宏
// 	__FILE__  文件名 
//	 __LINE__	所在行号 
//	 __DATA__	日期 
//	 __TIME__ 	时间 
//	对带参数 宏 的定义原则：
//1.整个数值要带 括号 
//2..每个单独的 参数要有 括号 
//	e.g. #define MIN(a,b) ((a)>(b)?(a):(b))
 
