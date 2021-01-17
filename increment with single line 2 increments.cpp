#include<stdio.h>
//execusion of 3 increments in the single lene
main()
{
	int a;
	a=10;
	 printf("%d\n%d\n",a++,a);//Here execusion will be left to right
	 printf("%d\n%d\n%d",a,a++,++a);
}
