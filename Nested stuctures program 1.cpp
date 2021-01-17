// Nested structures
#include<stdio.h>
struct dob
{
	int day;
	int month;
	int year;
};

struct student
{
	int id;
	char name[30];
	struct dob d1; // declaring the nested structure
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
