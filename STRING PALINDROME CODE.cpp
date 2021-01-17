#include<stdio.h>
#include <string.h> // In this code we are using the string functions that why we are including this header file also
#define N 100
int main()

{
	int i,length=0,flag=0;
	char string1[N];
	printf("Enter the characters into the string:\n");
	gets(string1);
	
	length=strlen(string1);
	for (i=0;i<length-1;i++)
	{
		if(string1[i]!=string1[length-i-1])
		{
		
		flag=1;
		break;
	}
}
if(flag)
printf("PALINDROME\n");
else
printf("Not a PALINDROME\n");
	}
