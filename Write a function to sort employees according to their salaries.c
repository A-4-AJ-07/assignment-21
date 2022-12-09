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
void sortBYsalary(struct Employee e[],int size)
{
	int r,i;
	struct Employee temp;
	for(r=0;r<size-1;r++)
	{
	   for(i=0;i<size-1-r;i++)
	   {
	   	if(e[i].salary>e[i+1].salary)
	   	{
	   		temp=e[i];
	   		e[i]=e[i+1];
	   		e[i+1]=temp;
		   }
		   }	
	}
}
int main()
{
    int i;
    struct Employee e[10];
    for(i=0;i<10;i++)
    {
        e[i]=input();
    }
    sortBYsalary(e,10);
    for(i=0;i<10;i++)
    {

        display(e[i]);
    }
    
    printf("%d\n");
    
    
    
}
