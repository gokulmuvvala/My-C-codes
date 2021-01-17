#include<stdio.h>
// an example for else if concept 
//Program to find relation between two values
main()
{
	int n1,n2;
	printf("Enter the n1 and n2 values");
	scanf("%d%d",&n1,&n2);
	if (n1==n2)//(==) is a compartor
	{
		printf("n1 and n2 are equal" );
	}
	else if(n1>n2)
	{
		printf("n1 is geartes than n2 ");
	}
	else
	{
		printf("n2 is gearter than n1");
	}
}
