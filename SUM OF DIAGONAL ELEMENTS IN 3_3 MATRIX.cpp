
#include<stdio.h>
#define R 3 // This is called macro
#define C 3 // R means row , C means column
int main()
{
int i,j,sum=0,a[R][C];
// entering elements into 2D array
printf("Enter the elements into array:\n");
for (i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
		scanf("%d\t",&a[i][j]);
	}
}
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
		if (i==j)
		{
			sum= sum+a[i][j];
		}
	}
}
printf("The sum of the Diagonal elements is : %d",sum);
}
