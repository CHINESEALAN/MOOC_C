#include<stdio.h> 
int main()
{
	int a = 0;
	scanf("%d",&a);
	int regdit = 0;
	int ret = 0;
	while(a>0)
	{
		regdit = a%10;
		ret = ret*10 + regdit;
		a/=10;
	} 
	printf("ret = %d",ret);
}

