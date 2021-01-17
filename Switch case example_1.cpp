#include<stdio.h>
//a swicth case example
main()
{
printf("Hello every one\n");
int n;
printf("enter n value ");
scanf("%d",&n);
switch(n)// here n will match with the all cases from case 1 to case n and execute the case which matches with the input that given by the user
{
 case 1 : printf("Sunday");// between case and 1 we should give gap because 1 is realated to n input
  break;
   case 2 : printf("Monday");
   break;
   case 3 : printf("Tuesday");
  break;
   case 4 : printf("Wednesday");
  break;	
   case 5 : printf("Thursday");
  break;	
   case 6 : printf("Friday");
  break;			
   case 7 : printf("Saturday");
  break;	
  default :printf(" Enter the number between the 1 to 7");//default is a keyword 
  break;
}

}
