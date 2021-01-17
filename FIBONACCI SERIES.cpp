#include<stdio.h>
main()
{
	int i,n,a=0,b=1,c;
	printf("Enter the n value:");
	scanf("\n%d",&n);
	printf("\n%d\t%d",a,b);//here we are printing first two numbers in fibonacci series
	for(i=3;i<=n;i++)//here we are initially considering i value as 3 because  fibonacci series starts as 0 1 1 2 3 5..........i[1]=1,i[2]=1,i[3]=2 ---here we can take i value as 3                                                                  
	{
		c=a+b;
		a=b;//here we update the a value
		b=c;//here we update the b value
		printf("\t%d",c);
	}
}
