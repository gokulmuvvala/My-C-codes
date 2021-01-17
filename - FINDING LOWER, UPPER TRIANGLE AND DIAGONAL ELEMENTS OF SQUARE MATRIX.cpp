#include<stdio.h>
int main()
{
int a[10][10],i,j,m,n;
scanf("%d%d",&m,&n);

	printf("Enter the elements into the square matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(m==n)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i<j)
				{
					printf("Upper triangle matrix\n");
					printf("%d",a[i][j]);
					}
					else if(i>j)
					{
						printf("Lower triangle of matrix\n");
						printf("%d",a[i][j]);
					}
					else
					{
						printf("Digonal\n");
						printf("%d",a[i][j]);
					}
				
			}
		}
	}
	else
	{
		printf("Not a square matrix");
	}
}
