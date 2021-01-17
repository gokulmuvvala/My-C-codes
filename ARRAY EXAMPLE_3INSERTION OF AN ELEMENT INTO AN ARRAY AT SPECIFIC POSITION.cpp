#include<stdio.h>
// INSERTION OF AN ELEMENT INTO AN ARRAY AT SPECIFIC POSITION
main()
{

int array[50],i,n,position,element;//initially we are considering array size as 50 globally
printf("Enter the  size of array");//Asking user size of array
scanf("%d",&n);
	printf("\nEnter the elements in the array");
for(i=0;i<n;i++)
{
	scanf("%d",&array[i]);//here we are reading all the elements into the array
	
}

printf("Enter the index position to insert element in array");
scanf("%d",&position);//here we give index position where we want insert the new element in an array

printf("Enter the element to insert at above location");
scanf("%d",&element);//here we give element in above location

for(i=n-1;i<=position;i--)//we should repeat this process until we reach the position
                          // here we should decrement because we must move left to write for reaching particular position 
{
   array[i+1]=array[i];//a[index+1]=a[index]
	
}
array[position]=element;//here we are assigning the element in the particular position that we want 
//this below loop is for  printing  all values in the array
for(i=0;i<=n;i++)
{
	printf("%d",array[i]);
}
}
