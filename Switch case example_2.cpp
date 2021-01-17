#include<stdio.h>
main()
//Example of switch case taking input as an charcter
{
	int a,b,c;
	int op;
	printf("Enter the a and b\n");
	scanf("%d%d",&a,&b);
	scanf("%c",&op); 
	switch(op)
	{
		case '+': c-a+b; printf("Sum=%d",c);
		break;
		case '-': c=a-b; printf("Sub=%d",c);
		break;
		case '*': c=a*b; printf("Mul=%d",c);
		break;
		default : printf("Enter only +,-,*");
		break;
		
	}
} 

