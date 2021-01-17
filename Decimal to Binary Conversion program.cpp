#include<stdio.h>
int main()

{
	int i,j,n,b[10000];
	printf("Enter the n value: \n");
	scanf("%d",&n);
	i=0; // initially we are considering i as 0
	while(n>0) // here condition is n must be greater than 0
	{
		b[i]=n%2; // % mod operation will give us reaminder 
		n=n/2; //  / divide operation will give update the n value in this while loop 
		i++; // i should be incremented
	}
	for(j=i-1;j>=0;j--) // here we are considering  another for loop 
	{
		printf("%d",b[j]);
		
	}
}
