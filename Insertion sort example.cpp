#include<stdio.h>
int main()
{
	int a[1000],n,i,j,temp=0; // initializing the variables
	// taking size of array from user 
	printf("Enter the size of an Array\n"); 
	scanf("%d",&n);
	// entering elements into array from user
	printf("Enter the elements into array\n");
	for(i=0;i<n;i++) 
	// Insertion sort logic
        scanf("%d",&a[i]);// entering elements into the array
		for (i=1;i<n;i++)  // here we are takung i=1 first we are considering 2 element in array
		{
			temp=a[i]; // here we are storing the first element to the temp variable So that we can compare this temp variable with all Remaning previous elements
			for(j=i;j>0 && temp<a[j-1];j--) // here the condition is j is equal to index and j should be greater than 0 and temp variable must be lessthan a[j-1] this checking process will be continoues from left to right from temp to before temp variables
			{
				// here j is current value and j-1 is previous values
				a[j]=a[j-1]; // if above for condition is true then we need move cuurent value to the previous value  
			}
			// after execution of this loop we will get the postion 
			a[j]=temp; // at that position we should place the temporary vairable
		}
		// printing elements after sorting
		printf("Sorted array\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]) ;

		}
     	
}
