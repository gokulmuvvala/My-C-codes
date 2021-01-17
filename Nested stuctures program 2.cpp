// Nested structures
#include<stdio.h>
struct student
{
	int id;
	char name[30];
	struct dob// declaring the nested structure
{
	int day;
	int month;
	int year;
}d1; // structure variable declaration for respective structures
};

int main()
{
	struct student s1;
	printf("Enter the student id : \n");
	scanf("%d",&s1.id);
	printf("Enter your name : \n");
	scanf("%s",&s1.name);
	printf("Enter your date of birth :\n");
	scanf("%d%d%d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
	
	printf("\t\tStudent details\t\t\n");
	printf("id=%d\n",s1.id);
	printf("Name=%s\n",s1.name);
	printf("Date of birth=%d/%d/%d\n",&s1.d1.day,&s1.d1.month,&s1.d1.year);
}
