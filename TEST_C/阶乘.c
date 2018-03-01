#include<stdio.h> 
int main()
{
	int a = 0;
	int jiecheng = 1;
	int cishu = 0;
	scanf("%d",&a); 
	while(a>0)
	{
		jiecheng*= a;
		a--;
		cishu+=1;
	}
	a+=cishu;
	if(a!=0)
		printf("%d!=%d",a,jiecheng);
	else 
		printf("0!=0");

}

