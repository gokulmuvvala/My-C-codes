#include<stdio.h>
#include<string.h>
#define N 30 // This is a macro
int main()
{
	char string1[N]; // Here strinG1 is a string name
	char string2[N]; // Creating the 2 strings
	printf("Enter the elements or characters into string1:\n");
	gets(string1);
	strcpy(string2,string1);// strcpy(Destinantion string, Source string);
	printf("string2 = %s",string2);
	
}
