#include<stdio.h>
int main()
{
	int seen[10]={0};
	int N;
	// part 1
	printf("Enter the numbers:\n");
	scanf("%d",&N);
	
	//part 2
	 int rem;
	 while(N>0)
	 {
	 rem=N%2;
	 if(seen[rem] == 1)
	 break;
	 seen[rem] =1;
	 N=N/10;
}

	 
	 // part 3
	 
	 if (N>0)
	 printf("yes");
	 else
	 printf("no");
	 return 0;
}
	 
	 
	
