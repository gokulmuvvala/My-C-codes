//All bitwise operators 
#include<stdio.h>
main()
{
	int a,b,c;
	a=12;
	b=25;
	printf("c=%d\n",a&b);//and(multiply)
	printf("c=%d\n",a|b);//or(+)
	printf("c=%d\n",a^b);//xor
	/* before performing not operation we must know that output will come in 2s' complement there
	is formula  ~n=-(n+1) that means we can under stand that first we must find complement and after 
	convert it into 2's complement and add 1 to it put (-) then the answer we can get*/
	printf("c=%d\n",~4);//not(complement)
	printf("c=%d\n",~35);//not(complement)
	/*Shift opertors is used to shift the number left or write by n number units*/
	printf("c=%d\n",a<<2);// left shift(toward 2 units ) 
	printf("c=%d\n",a>>2);// right shift (toward 2 units)
	
}

