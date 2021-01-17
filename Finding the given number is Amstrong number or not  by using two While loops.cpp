#include<stdio.h>
#include<math.h>// In this code we are applying the power function so we must write mah.h header file
int main()
{
	int n,t,temp,digit,remainder,count=0,sum=0;
	printf("Enter the n value:\n");
		scanf("%d",&n);
	t=n;
	temp=n;
	while(n!=0)
	{
		digit=n%10; //here by mod operation we are removing the last digit on give number
		//intially count is 0
		count=count+1;// if digit changes then count will be incremented 
		n=n/10;// here n will changed after every iteration until n=0
			}
			// this 2 while loop  is for to adding the numbers with there powers  
			while(t!=0)
			{
				remainder= t%10;
				sum=sum+pow(remainder,count);//sum is intially 0 // sum=sum + rem^count // here count is fixed
				t=t/10; 
			}
			if(sum==temp)
			printf("%d is a Amstrong number",temp);
			else
			printf("%d is a not an Amstrong number",temp);
			}
