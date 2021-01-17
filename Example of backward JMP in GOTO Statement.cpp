#include<stdio.h>
// example backward JMP in GOTO statement
int main()
{
	int n,i;
	printf("Enter the n value: ");
	scanf("%d",&n);
	i=1;
loop:	printf("%d\n",i);
	i++;
	if(i<n)
	goto loop;
}
