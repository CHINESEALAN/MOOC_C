#include<stdio.h>
void  view();
void f();
void b();
int  main()
{
//	int gAll = 0;//�����ر�����	��ʼ��  
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
{	static int a = 1;//static������aΪȫ�ֱ��� ������Ժ������ǳ�ʼ�� 1 ��,�ٴε���ʱ����ֵ
					//�������� �����Ե��ô�ֵ 
	printf("%p\n",&a);
//	printf("%d\n",a);
//	a +=1;
//	printf("%d\n",a);
}
void b()
{
	a+=1;//static������aΪȫ�ֱ��� ������Ժ������ǳ�ʼ�� 1 ��,�ٴε���ʱ����ֵ
		//��������������   ��ȫ�ֱ���a = 0 
	printf("%d",a);
}
void view()
 {	int a = 1;
 	{
	static	int a = 2;
	printf("%d",a); 
 	printf("%s",__func__);//��ӡ��ǰ����������view	 
 	}
 }
