#include<stdio.h>
struct employee // structure declaration
{
	char name[30];
	int eid;
	int salary; // here we are declaring int type of variable so the employee salary can be not more that 32600 if that count is exceeds then negative value will be printed as output
};
int main()
{
	
	struct employee emp[10];  // here we are taking the 10 employee details 
		printf("\t \tEnter the employee Details\t \t \n");
		int i;
	for(i=0;i<10;i++)
	{
	printf("Enter the employee name :\n");
	scanf("%s",&emp[i].name);
	printf("Enter the employee id :\n");
	scanf("%d",&emp[i].eid);
	printf("Enter the salary : \n");
	scanf("%d",&emp[i].salary);

	
		
	}
	
	for(i=0;i<10;i++)
	{
		printf("Employee name is %s\n",emp[i].name);
		printf("Employee id is %d\n",emp[i].eid);
		printf("Employee salary is %d\n",emp[i].salary);
		
	}
}
	
