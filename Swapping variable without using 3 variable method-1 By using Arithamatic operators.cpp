#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b:\n");
	scanf("%d\t%d",&a,&b); // here we are taking the input from user 
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\t%d",a,b); // printing a and b value
}
