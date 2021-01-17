#include<stdio.h>
#include<string.h>
#define N 60
int main()
{
	char string1[N];
	printf("Enter the elements or characters into the string\n");
	gets(string1);
	
	strrev(string1);
	printf("Reverse= %s",string1);
	
}
