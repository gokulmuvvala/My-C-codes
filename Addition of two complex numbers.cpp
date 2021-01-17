#include<stdio.h>
struct Complex
{
	// Declaring members
	int real;  // member 1
	int imaginary; // member 2
	
};
int main()
{
	struct Complex a,b,c; //  Declaring the structure variables
	printf("Enter a and b where a + ib is the first complex number.\n");
	scanf ("%d%d",&a.real,&a.imaginary);
	printf("Enter c and d where c + id is the second complex number.\n");
	scanf("%d%d",&b.real,&b.imaginary);
	c.real= a.real+b.real; 
	c.imaginary=a.imaginary+b.imaginary; 
	if(c.imaginary>=0)
	printf("%d+%d(i)",c.real,c.imaginary); // if resultant complex number is a+ib
	else
	printf("%d-%d(i)",c.real,c.imaginary); // if comple resultant complex number is a-ib
}
