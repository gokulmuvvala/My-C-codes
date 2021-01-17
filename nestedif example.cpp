#include<stdio.h>
// nested if example
main()
{
	int n1,n2,n3;
	printf("Enter the n1,n2 and n3 values  ");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2)
	{
	if(n1>n3)
{
	printf("n1 is big");
}
else
{
	printf("n3 is big");
}
}
else
{
	if(n2>n3)
	{
	
	printf("n2 is grater than n3");
}
else
{
	printf("n3 is grater than n1 and n2");
}
	}
}
