#include<stdio.h>
int u(int n);
void main()
{
   u(5);
   printf("%d",u(5));
}
int u(int n)
{
    int sum = 0;
	if(n==1)
	{
	return 1;}
	else
	{	
		return n*u(n-1);
	}
}

