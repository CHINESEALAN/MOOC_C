 #include<stdio.h>
 int main()
 {
 	int ch;
 	while((ch=getchar())!=EOF)//getchar不需要参数  
 	{
 		putchar(ch);//putchar 需要参数 
 				//win下 ctrl + z 是eof  
				 //unix 下 ctrl + d
				 //ctrl + c 关闭窗口 
	 }
	 return 0;
  } 
