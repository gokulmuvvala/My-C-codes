// voter identification problem
#include<stdio.h>
int main()
{

int age,Vote;

	printf("Enter your age here : ");
    scanf("%d",&age);
    if(age>=18)
   goto Vote;
    else
    printf("You are not Eligible for VOTE\n");
    
Vote: 
printf("You are Eligible for VOTE\n");
return 0;	
}

