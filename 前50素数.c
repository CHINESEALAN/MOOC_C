#include<stdio.h>
int main()
{
	
	int cnt = 0;
	int a=2;
	for(a=2;cnt<50;a++)
	{
		int isPrime = 1;
		int i=2;
		for(i=2;i<a;i++)
		{	if(a%i==0)
			{
				isPrime = 0;
				break;
			}
		}	
			if(isPrime==1)
		 	{
			 printf("%d ",a);
			 cnt++;
			}
	}  
	
	 return 0;
 } 
