#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter the n value here:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum= sum+i;
		}
	}
	if (sum==n)
	
		printf("%d is a perfect number ",n);
		else
		printf("%d is a not a perfect number",n);
	
}
