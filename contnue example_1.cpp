#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=5;i++)//intially i=1 we are considering
	{
		if(i==3)// here we are whant skip the iteration when i=3
		{
			continue;
		}
		printf("%d\n",i);
	}
}
