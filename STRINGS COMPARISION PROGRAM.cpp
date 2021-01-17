#include<stdio.h>
#include<string.h>
#define N 50 // This is a macro  
int main()
{
	char string1[N], string2[N];
	
	printf("Enter the elements or characters into string 1\n");
	gets(string1);
	
	printf("Enter the elements or characters into string 2\n");
	gets(string2);

if	(strcmp(string1,string2) == 0)
     printf("The string1 and string2 are equal.\n");
     else
        printf(" The string are not equal.\n");
        
        return 0;
        
	
}
