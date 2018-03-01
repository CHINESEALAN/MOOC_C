#include"array.h"
#include<stdio.h>
#include<stdlib.h>
const int BLOCK_SIZE = 20;
//typedef struct {
//	int *array;
//	int size;
//}Array;

//����һ���Զ��������С�ı���
Array array_create(int init_size)
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*init_size);
	return a;
 } 
//�ͷ��ڴ� 
void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;//ָ���ַΪ��,�ͷ� 
	a->size = 0;//���� 
}
//��װ  ���ڲ�ʵ��ϸ�ڵı��� 
int array_size(const Array *a)
{
	return a->size;
 } 
//�Զ�����������,�ڷ���ָ�� Խ��� �±��ʱ��,������Զ��������� 
int * array_at(Array *a,int index)
{	
	if(index >= a->size)//���Ĵ���,�Զ�����BLOCK_SIZE���ڴ� 
	{
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
	}
 	return &(a->array[index]);
 } 
//������ָ��λ�ø�ֵ 
int array_set(Array *a,int index,int value)
{
	a->array[index] = value;
	return a->array[index];
 } 
//Ϊ��������size 
void array_inflate(Array *a,int more_size)
{
	//����һ���ռ� 
	int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
	//��ԭ���ڴ� ��Ϣ �����¿��ٵĿռ��ڴ� ,= memcpy()
	int i;
	for(i = 0;i<a->size;i++)
	{
		p[i] = a->array[i];
	}
	free(a->array);//�ͷ�ԭ�пռ���Ϣ 
	a->array = p;//�� �����˵��ڴ� �ռ� �� ��Ϣ ����ԭ�пռ� 
	a->size+=more_size;//Ϊԭ�пռ� ��� ��size 
	
 } 

int main(int argc ,char const *argv[])
{
	Array a = array_create(5);//��̬�����ڴ� 
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
	array_free(&a);//�ͷ��ڴ� 
	
	return 0;
 } 
