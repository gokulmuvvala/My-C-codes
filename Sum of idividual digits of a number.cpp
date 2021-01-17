#include<stdio.h>
main()
{
	int n,r,sum=0;//here we are considering the sum as temparory variable
printf("Enter the n value:");
scanf("%d",&n);
while(n>0)
{
	r=n%10; 
	sum=sum+n;
	n=n/10;
}
printf("sum=%d",sum);
}
