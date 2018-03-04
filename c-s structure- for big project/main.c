#include<stdio.h>
#include"max.h" 
#include"min.h" 
int main()
{	double i = 10; 
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%f",max(a,b));
	printf("%f",max(a,i));
	return 0;
}

