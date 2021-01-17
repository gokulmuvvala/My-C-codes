#include<stdio.h>
//  numerical palindrome code 
 main()
{
	int i,n,r,temp=0,reverse=0;
	printf("Enter the numbers here:\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		reverse=reverse*10+1;
		n=n/10; // This for updation of n value for next iteration
	}
	if(reverse == temp)
	printf("PALINDROME\n");
	else
	printf("NOT A PALINDROME\n");
	return 0;
	
}
