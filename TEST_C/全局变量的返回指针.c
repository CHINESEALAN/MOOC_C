#include<stdio.h>
int  *h();
void f();
int  main()
{
	int *p = h();
	printf("%d\n",*p);
	h();
	f();
	printf("%d\n",*p);//������� ��ֵ 12����Ϊ ���ر��ر����ĵ�ַ 
					//�������������û�����ͬһ����ַ�洢����  ��ô�ͻ���� f()��������ֵ 12 
	return 0;
 } 
 int * h()
 {
 	int a = 10;
 	printf("h()a�ĵ�ַ = %p\n",&a);
 	return &a;
 }
 void f()
 {
 	int k =12;
 	printf("f()k�ĵ�ַ = %p\n",&k);//%p�� ��ʽҪ��ס ȡ��ַ�� 
  } 

