#include<stdio.h>
#include<string.h>
struct Employee{
 int id;
 char name[20];
 int salary;
};
struct Employee input()
{

    struct Employee e;
    fflush(stdin);
    printf("Enter the id , name, salary:");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name) - 1] = '\0';
    scanf("%d",&e.salary);
    return e;
}
struct Employee display(struct Employee e)
{

    printf("%d %s %d",e.id,e.name,e.salary);
    printf("\n");
}
void maxInsalary(struct Employee e[],int size)
{
	 int i;
	 int x;
	 for(i=1;i<=size-1;i++)
	 {
	 	if(e[0].salary<e[i].salary)
	 	e[0].salary=e[i].salary;
	 }
	 e[0].salary;
	 
}
int main()
{
    int i;
    struct Employee e[10];
    for(i=0;i<10;i++)
    {
        e[i]=input();
    }
    for(i=0;i<10;i++)
    {

        display(e[i]);
    }
    
    printf("%d\n");
    printf("Highest in the salary is:\n");
    fflush(stdin);
    display(e[0]);
}
