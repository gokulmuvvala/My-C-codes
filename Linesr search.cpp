#include<stdio.h>
int main()
{
	int a[1000],i,n,key,flag; // Declaring all variables that required
	printf("How many elements you want to enter into array\n"); // taking input from user
	scanf("%d",&n);
	
	printf("Enter the elements into array:n\n"); // taking input from user
	
	for(i=0;i<n;i++) // This loop for taking integers into array
	{
	
	scanf("%d",&a[i]);
	
}
	printf("Enter the key element to search:"); // Taking the key element that we want to search in the array
	scanf("%d",&key);
	
	for(i=0;i<n;i++) // This loop is for comparing key with every single element in array 
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1) // flag is a temp variable
	printf("Element found at index %d",i);  
	else
	printf("Element not found");
	return 0;  
}
