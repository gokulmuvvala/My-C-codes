//ALL ARITHAMATIC OPERATIONS EXAMPLES
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	c=a+b;//add
	printf("%d\n",c);
		c=a-b;//sub
			printf("%d\n",c);
			c=a/b;//To get an accurate answer we should use float variables in denominator or in numerator while doing (/) divide operation.
				printf("%d\n",c); 
                 c=b/a;// divide
				 	printf("%d\n",c); 
			    	c=a%b;//While doing the Modulo(%) operation we should not use float type of variables.
						printf("%d\n",c); 
					  c=-a+b;
					  	printf("%d\n",c);
						 c=++a+b;
						 	printf("%d\n",c);
						 	c=++a+b++;//here increment operator cant work as b++ (Because it is not allowed In #C)
						 		printf("%d\n",c);
						 		c=--a-b--;//here decrement operator cant work as b-- (Because it is not allowed In #C)
						 			printf("%d\n",c);						
						}

