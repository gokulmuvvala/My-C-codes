#include<stdio.h>
// Declaring structure
struct student
{
	int rollnumber; // bt18ece584
	char name[20]; // gokul
	float percentage; // 96.2
};
int main()
{
	struct student s1,*ptr; // calling structure and declaring the strcture pointer we can also declare stucture pointer in next line also like stuct student *ptr
	ptr=&s1; // pointing pointer to address of s1
	printf("Enter roll number\n");
	scanf("%d",&s1.rollnumber);
	printf("Enter your name:\n");
	scanf("%s",s1.name); // as it is name no need of &
	printf("Enter the percentage\n");
	scanf("%f",&s1.percentage);
	
	printf("\tRoll number=%d\n",ptr->rollnumber); // accessing members of structures using pointers
	printf("\tName=%s\n",ptr->name);
	printf("\tPercentage=%f\n",ptr->percentage);
}
