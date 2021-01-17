#include<stdio.h>
//PROGRAM TO READ AND DISPLAY THE ELEMENTS OF ONE DIMENSIONAL ARRAY
main()
{
int marks[100],i,n;//here we are declaring  an array with a maximum number of elements we want and also i we declared i and n variables
//marks is a array name
printf("Enter the size of an array:");//here we are asking user to give size of array that he want
scanf("%d\n",&n);//here n is of array
for(i=0;i<n-1;i++)
{
	scanf("%d\n",&marks[i]);//reading the elements into array
	}	

// After reading the elements we whant print that elements
printf("Elements of array:\n");
for(i=0;i<n-1;i++)
{
	printf("%d\n",marks[i]);
	}
}
