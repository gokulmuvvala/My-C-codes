// Arthimatic operations by call by refernce functions program
#include<stdio.h>
int add(int*,int*,int*);// Function declartion
int main()
{
	int a,b;
	int sum=0;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	  add(&a,&b,&sum); // Calling the function
	
}
// Function definition
/* * represents the value of which the pointer that pointing the variable or address
and & repsnts the address of the variable*/
int add(int *a,int *b,int *sum)
{
	sum=*a+*b;
	printf("sum=%d",sum);
}
