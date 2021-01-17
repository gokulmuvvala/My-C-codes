#include<stdio.h>
main()
{
	file *fp;
	char ch;
	fp=fopen("input.txt","w"); // write mode
	while((ch=getchar())!EOF); // Reading data from console
   {
   	fputc(ch,fp); // writing data into file
   	printf("%c",ch); // writing data on the screen
		
	}
}
