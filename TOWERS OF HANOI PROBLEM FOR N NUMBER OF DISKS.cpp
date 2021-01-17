#include<stdio.h>
// function declartion
void towers(int,char,char,char);
 main()
{
	int n;
	char A,C,B;
   printf("Enter the number of disks here:\n");
   scanf("/d",&n);
   	printf("The sequence of moves involved in the Tower of Honai are :\n");
   	 towers(n,'A','C','B'); // function call A- Source,C-Destination,B-auxilary
}
// Function defination
void towers(int n,char frompeg, char topeg, char auxpeg ) // Source is also called as frompeg,Destination is also called as topeg, auxilary is also called as auxpeg
{
	if(n == 1)
	{
		printf("\n Move disk 1 frompeg %c to peg %c",frompeg,topeg);// if n=1 moving from peg disks to topeg
		return;
	}
	towers(n-1,frompeg,auxpeg,topeg);
	printf("\n Move disk %d frompeg %c to peg %c",n,frompeg,topeg);
		towers(n-1,auxpeg,topeg,frompeg);
}
