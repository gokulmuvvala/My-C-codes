// Arithmetic operation using call by value functions
#include<stdio.h>
// function declaration
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);  // here we are declaring float type of function for accurate solution
int main()
{
	int a,b; // initializing input variables
	int sum=0,diff=0,product=0,divi=0; // initializing the output variables 
	printf("Enter the a and b values here : \n");
	scanf("%d%d",&a,&b);
	sum= add(a,b); // here we are calling the functions
	diff= sub(a,b);
	product= mul(a,b);
	divi=div(a,b);
	printf("%d,%d,%d,%d",sum,diff,product,divi);
	}
	// Here we are writing the function definition 
	int add(int x, int y)
	{
		return x+y;
	}
	
	int sub(int x, int y)
	{
		return x-y;
	}
	
	int mul(int x, int y )
	{
		return x*y;
	}
	// for division we are doing type casting the answer for accurate solution
	float	div(int x, int y)
	{
		int c; // declaring a new variable for storing output value
		c=(float)x/y;
		return c; // here we are returning c because c contain accurate answer of div
	}
