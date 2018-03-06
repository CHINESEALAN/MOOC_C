#include <stdio.h>
//#include <stdlib.h>
#include"student.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void getlist(Student aStu[],int number);
int save(Student aStu[],int number);
int main(int argc, char const *argv[]) {
	int number = 0;
	printf("学生数：");
	scanf("%d",&number);
	Student aStu[number];
	
	getlist(aStu,number);
	if(save(aStu,number)){
		printf("保存成功\n"); 
	}else{
		printf("保存失败\n");
	}
	return 0;
}
void getlist(Student aStu[],int number)
{
	char format[STR_LEN];
	sprintf(format,"%%%ds",STR_LEN-1);
	int i;
	for(i=0;i<number;i++)
	{
		printf("第%d个学生:",i+1);
		printf("\t姓名:");
		scanf(format,aStu[i].name);
		printf("\t性别(0-男,1-女,2-其他):"); 
		scanf("%d",&aStu[i].gender);
		printf("\t年龄");
		scanf("%d",aStu[i].age); 
	}
}
int save(Student aStu[],int number)
{
	int ret = -1;
	FILE*fp = fopen("student.data","w");
	if(fp)
	{
		ret = fwrite(aStu,sizeof(Student),number,fp);
		fclose(fp);
	}
	return ret == number;
}
