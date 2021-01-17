#include<stdio.h>
int main()
{
	int i,j,x,n;
	printf("Enter the n value: ");
	scanf("%d",&n);
	x=1; // Intially assuming x as 1
	for(i=1;i<=n;i++)// This loop is For rows
	{
		for(j=1;j<=i;j++) // This loop is columns
		{
			printf("\t %d \t",x);
			x++;
		}
		printf("\n");
	}
}
