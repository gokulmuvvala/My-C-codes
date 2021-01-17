#include<stdio.h>
#include<string.h>
#define N 20 // this is a macro
int main()
{
	char name[N]; // Declaring charcter type array
	int len; // Declaring a variable
	printf("Enter the elements or characters into the string to calculate the length\n");
	gets(name); // Enter the elements or characters into string with the help of gets(Run time initialization type function)
	len=strlen(name);
	printf("length=%d",len); // here no need of writing &len because it is a string no array
	return 0;
}
