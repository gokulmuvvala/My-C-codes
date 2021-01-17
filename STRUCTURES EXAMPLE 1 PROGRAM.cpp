#include<stdio.h>
// structure declaration
struct student // struct is a key word used to create the structure 
{
	int id;
	char name[20];
	float percentage;
	
	
};

int main()
{
struct student s1={10,"Gokul",99.9};
struct student s2;
printf("Enter the details of s2\n");
scanf("%d%s%f",&s2.id,s2.name,&s2.percentage); // dot(.) used for accessing the variables of structures
printf("Details of student 1\n");
printf(" Student Id=%d \t Student name=%s\t student percentage=%f\n",s1.id,s1.name,s1.percentage);
printf("Details of student 2\n");
printf("Student Id=%d \t Student name=%s\t student percentage=%f\n",s2.id,s2.name,s2.percentage);

}
