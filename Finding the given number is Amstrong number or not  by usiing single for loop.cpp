#include<stdio.h>
#include<math.h>
int main()
{
int n,t,i,j,remainder,sum=0,a[10];

	printf("Enter the n value\n");
	scanf("%d",&n);
	 t=n;
	i=0;
	while(n!=0)
	{
		remainder=n%10;
		a[i]=remainder;// The remainder value is directly stored in array
		i++; // incrementing i value 
		n=n/10;// incrementing n value according to the loop 
	}
	for(j=0;j<i;j++) // j is temporary variable
	{
		sum=sum+pow(a[j],i); // sum= sum+a[0]^i || sum= sum+a[1]^i......
	}
	if (sum==t) // Equating sum and t
	
		printf("%d is a Amstrong number ",sum);
		else
		printf("%d is not an Amstrong number",sum);
		
}
