#include<stdio.h>
// Recursion using functions (finding factorial to given number)
int factorial(int n);
int main()
{
	int n,result=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	result=factorial(n); 
	printf("%d",result);
}
// function definition

int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
	
}
