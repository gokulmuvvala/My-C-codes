#include<stdio.h>
main()
{
	typedef int integer; // like this we use typedef keyword and we can give any alias name that we want 
	typedef float fraction;
	typedef char character;
	integer a=10;
	fraction b=22.4;
	character c= 'Go';
	printf("a=%d\n",a);
	printf("b=%f\n",b);
	printf("c=%c\n",c);
}
