#include<stdio.h>
struct  Employee
{
	int id;
	char name[10];
	int salary;
  	
};
void main()
{
	struct Employee e1={01,"Amit",15000};
	printf("Employee status:\n%d\n%s\n%d",e1.id,e1.name,e1.salary);
}