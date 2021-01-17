#include<stdio.h>
main()
//DELETION OF AN ELEMENT FROM A SPECIFIC POSITION IN AN ARRAY
{
	//insertion of elements into array
	int array[50],i,position,n;
	printf("\nEnter the size of an array:");
	scanf("\n%d",&n);
	
		printf("\nEnter the elements in array:");
	for(i=0;i<n;i++)//here size of array is 5
	{
	
		scanf("\n%d",&array[i]);
		
	}
	printf("\nEnter the index position to delete an element in array:");
	scanf("\n%d",&position);
	//shifiting process
	for(i=position;i<n-1;i++)
	{
		array[i]=array[i+1];
	}
	for(i=0;i<n-1;i++)//here we i<4 because after delition only size of array become to 4
{
	printf("%d",array[i]);
}

}
