#include<stdio.h>
int main()
{
	// here we are initialing the variables
	int i,j,n,a[10],temp=0; 
	// taking array size from user
	printf("Enter the array size here:\n");
	scanf("%d",&n);
	// taking array elements from user
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++) // outer loop
		scanf("%d",&a[i]);
		// here we are using nested loop for sorting
		for(i=1;i<n;i++)// In outer loop we use i for passes 
		{
			for(j=0;j<n-i;j++)// In inner loop we use j for operations and comparisons
			{
				if(a[j]>a[j+1]) // for example we can say if a[0]>a[1]  
				{
					temp=a[j]; // temp=a[0]
					a[j]=a[j+1];// a[0]=a[1]
					a[j+1]=temp;// a[1]=temp
					// like this process will happen for n-i times
				}
			}
		}
		printf("Here u can see the sorted order\n");
	for(i=0;i<n;i++)
	{
			printf("%d\n",a[i]);
	}
}
