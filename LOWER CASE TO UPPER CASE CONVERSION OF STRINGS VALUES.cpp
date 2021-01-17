#include<stdio.h>
#include<string.h>
#define N 70
int main()
{
	char string1[N];
	printf("Enter the elements or characters into the string\n");
	gets(string1);
	
	strupr(string1);
	printf("UPPER CASE = %s",string1);
	
}
