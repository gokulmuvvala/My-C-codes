// Swapping the variables using the XOR operator method 2
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\t%d",a,b);
}
