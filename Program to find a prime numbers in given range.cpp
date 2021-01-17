#include<stdio.h>
main()
{
	int n,i,j,flag=0;
	printf(" Enter the n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)//declaring the outer loop
	{
		flag=0;//intially flag is equal to 0
		for(j=1;j<=i;j++)//declaring the inner loop
		{
			if(i%j == 0)
			{
				flag=flag+1;
			}
			if(flag==2)
			{
				printf("%d is prime number\n",i);
			}
		
			
			
		}
	}
}
