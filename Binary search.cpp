#include<stdio.h>
int main()
{
	int i,n,mid=0,flag=0,key,low=0,high=4,a[1000]; // Declaring all temperory and initial variables
	printf(" How many numbers you want to enter in the array:\n"); // taking input from user
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)  // inserting elements into the array
	{
	

	scanf("%d",&a[i]);
}
	printf("Enter the key element to search:"); // Taking the key element that we want to search in the array
	scanf("%d",&key);
	
while (low<high)       // condition binary tree
{
	mid= (low+high)/2;
	
	if(key==a[mid])
	{
	
	flag = 1;
	break;
}
	else if (key<a[mid])
	high=mid-1;
	else
	low=mid+1;
}

if(flag==1)
printf("key is found");
else
printf("key is not found");
		
}
