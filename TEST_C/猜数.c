#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand()%100;
	int count = 0;
	int a = 0;
	printf("%d\n",number);
	do
	{
	scanf("%d",&a); 
	count+=1;
	if(number!=a)
	printf("�������\n"); 
	}while(number!=a); 
	printf("��ϲ��¶��� ���� = %d",count); 
	return 0;
		
}

