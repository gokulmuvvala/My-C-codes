#include<stdio.h>
#include<string.h>
#define N 80
int main()
{
	char string1[N], string2[N];
	int i;
	printf("Enter the elements or characters into the string\n");
	gets(string1);
	
	for(i=0;string1[i]!='\0';i++)
	{
	
	    string2[i]=string1[i];
	
}
string2[i]='\0';

printf("string2:%s",string2);

}
