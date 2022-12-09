#include<stdio.h>
#include<string.h>
struct marksOfstudent{
	int roll_no;
	char name[10];
	float  chem_marks;
	float  phy_marks;
	float  maths_marks;
};
struct marksOfstudent inputData()
{
	struct marksOfstudent s;
	fflush(stdin);
	printf("Enter the roll no. of student:\n");
	scanf("%d",&s.roll_no);
	fflush(stdin);
	printf("Enter the name of student:\n");
	fgets(s.name,20,stdin);
	s.name[strlen(s.name-1)]='\0';
	fflush(stdin);
	printf("Enter the chemistry marks:");
	scanf("%f",&s.chem_marks);
	fflush(stdin);
	printf("Enter the physics marks:");
	scanf("%f",&s.phy_marks);
	fflush(stdin);
	printf("Enter the maths marks:");
	scanf("%f",&s.maths_marks);
	fflush(stdin);
    return s;
}
struct marksOfstudent displayData(struct marksOfstudent s)
{
	float x;
	printf("total percentage in three subjects:");
	x=(s.chem_marks+s.maths_marks+s.phy_marks)/3;
	printf("%f\n",x);
}
int main()
{
	int i;
	struct marksOfstudent s[5];
	printf("Enter the student data:\n");
	for(i=0;i<5;i++)
	{
		s[i]=inputData();
	}
	for(i=0;i<5;i++)
	{
		displayData(s[i]);
	}
}