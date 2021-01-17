#include<stdio.h>
#include<string.h>
#define N 70
int main()
{
	char string1[N];
	printf("Enter the elements or characters into the string\n");
	gets(string1);
	
	strlwr(string1);
	printf("LOWER CASE = %s",string1);
	
}
