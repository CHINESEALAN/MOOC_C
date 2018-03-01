#include<stdio.h>
struct time {
	int hour;
	int min;
	int sec;
}; 
struct time timeUpdate(struct time now); 
int main(int argc,char const *argv[])
{
	struct time testTimes[3] = {
		{11,22,33},{12,23,34},{13,24,35}
	};	
	int i = 0;
	for(i=0;i<3;i++)
	{	//int i;
		printf("%.2i:%.2i:%.2i",
			testTimes[i].hour,testTimes[i].min,testTimes[i].sec);
		testTimes[i] = timeUpdate(testTimes[i]);
		printf("....one second later is %.2i:%.2i:%.2i\n",
			testTimes[i].hour,testTimes[i].min,testTimes[i].sec);
	}
	return 0;
 } 
struct time timeUpdate(struct time now)
{
	++now.sec;
	if(now.sec==60)
	{
		now.sec==0;
		++now.min;
	}
	if(now.min==60)
	{
		now.min==0;
		++now.sec;
	}
	if(now.hour==24)
	{
		now.hour==0;
	}
	return now;
}
