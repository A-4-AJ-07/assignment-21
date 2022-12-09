#include<stdio.h>
#include<string.h>
struct  Employee 
{
	int id;
	char name[10];
	int salary;
	
  	
};
struct Employee display(struct Employee e)
{
   printf("employee details:\n%d %s %d\n",e.id,e.name,e.salary);	
}
struct Employee input()
{
	struct Employee e;
	printf("Enter the id of employe : ");
	scanf("%d",&e.id);
	fflush(stdin);
	printf("Enter the name of employe : ");
	fgets(e.name,20,stdin);
	e.name[strlen(e.name-1)]='\0';
	printf("Enter the salary of employe : ");
	scanf("%d",&e.salary);
	return e;
}
void main()
{
	struct Employee e1,e2,e3;
	printf("Enter the status of employees:\n");
	e1=input();
	e2=input();
	e3=input();
	display(e1);
	display(e2);
	display(e3);
	
	
}
