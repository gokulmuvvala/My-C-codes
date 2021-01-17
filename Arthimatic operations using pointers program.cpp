// Arthimatic operations using pointers program
#include<stdio.h>
int main()
{
	int a,b;
	int *p1,*p2; // declaring integer type pointers 
	int sum=0,diff=0,div=0,mul=0; // initializing ouputs to 0
	printf("Enter the a and b values:\n");
	scanf("%d%d",&a,&b);
	p1=&a; // p1 means pointer 1 which holds the address of the a 
    p2=&b; // p2 means pointer 2 which holds the address of the b
	 sum=*p1+*p2; // stars allways represents the value that pointer is pointing address
	 diff=*p1-*p2; // sub
	 div= (*p1)/(*p2); // division
	 mul= *p1**p2; // multiplication
	 printf("%d\n",sum); 
	 printf("%d\n",diff);
	 printf("%d\n",div);
	 printf("%d\n",mul);
}
