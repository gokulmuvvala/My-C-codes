#include<stdio.h>

int main()
{
	int i,n,a[1000];
	// Entering size of an array
	printf("Enter the size of an array:\n");
	scanf("%d",&n);
		// takeing array elements from user
    printf("Enter the elements into the array:\n");
	for (i=0;i<n;i++)
	{
		
		scanf("%d\n",&a[i]);
	}
	// Original order
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	// Reverse order
	for (i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

