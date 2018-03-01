#include"array.h"
#include<stdio.h>
#include<stdlib.h>
const int BLOCK_SIZE = 20;
//typedef struct {
//	int *array;
//	int size;
//}Array;

//创建一个自定义变量大小的变量
Array array_create(int init_size)
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*init_size);
	return a;
 } 
//释放内存 
void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;//指针地址为空,释放 
	a->size = 0;//保险 
}
//封装  对内部实现细节的保护 
int array_size(const Array *a)
{
	return a->size;
 } 
//自动增长的数组,在访问指定 越界的 下标的时候,数组会自动增长分配 
int * array_at(Array *a,int index)
{	
	if(index >= a->size)//核心代码,自动增长BLOCK_SIZE的内存 
	{
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
	}
 	return &(a->array[index]);
 } 
//给数组指定位置赋值 
int array_set(Array *a,int index,int value)
{
	a->array[index] = value;
	return a->array[index];
 } 
//为数组增大size 
void array_inflate(Array *a,int more_size)
{
	//开辟一个空间 
	int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
	//把原有内存 信息 传给新开辟的空间内存 ,= memcpy()
	int i;
	for(i = 0;i<a->size;i++)
	{
		p[i] = a->array[i];
	}
	free(a->array);//释放原有空间信息 
	a->array = p;//把 增加了的内存 空间 和 信息 传给原有空间 
	a->size+=more_size;//为原有空间 标记 新size 
	
 } 

int main(int argc ,char const *argv[])
{
	Array a = array_create(5);//动态分配内存 
	printf("size = %d\n",array_size(&a));
	*array_at(&a,0) = 10;
	printf("%d\n",*array_at(&a,0));
	int x = array_set(&a,1,20);
	printf("%d\n",x);
	int cnt = 0;
	int  number = 0;
	while(number!= -1){
		scanf("%d",&number);
		if(number!=-1)
		{
		*array_at(&a,cnt++) = number;
		}
	} 
	array_free(&a);//释放内存 
	
	return 0;
 } 
