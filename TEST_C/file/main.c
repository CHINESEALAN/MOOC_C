#include <stdio.h>
//#include <stdlib.h>
#include"student.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void getlist(Student aStu[],int number);
int save(Student aStu[],int number);
int main(int argc, char const *argv[]) {
	int number = 0;
	printf("ѧ������");
	scanf("%d",&number);
	Student aStu[number];
	
	getlist(aStu,number);
	if(save(aStu,number)){
		printf("����ɹ�\n"); 
	}else{
		printf("����ʧ��\n");
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
		printf("��%d��ѧ��:",i+1);
		printf("\t����:");
		scanf(format,aStu[i].name);
		printf("\t�Ա�(0-��,1-Ů,2-����):"); 
		scanf("%d",&aStu[i].gender);
		printf("\t����");
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
