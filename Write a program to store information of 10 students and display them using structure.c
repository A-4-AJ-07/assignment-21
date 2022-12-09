#include<stdio.h>
#include<string.h>
struct student{
	int roll_student;
	char name_student[10];
	int class_student;
	int phone_student;
};
struct student inputData()
{
	struct student s;
	fflush(stdin);
	printf("Enter the roll no. of student:\n");
	scanf("%d",&s.roll_student);
	fflush(stdin);
	printf("Enter the name of student:\n");
	fgets(s.name_student,20,stdin);
	s.name_student[strlen(s.name_student)-1]='\0';
	fflush(stdin);
	printf("Enter the class of student:\n");
	scanf("%d",&s.class_student);
	fflush(stdin);
	printf("Enter the phone no. of student:\n");
	scanf("%d",&s.phone_student);
	return s;
}
struct student displayData(struct student s)
{
	printf("%d %s %d %d",s.roll_student,s.name_student,s.class_student,s.phone_student);
	printf("\n");
}
int main()
{
	int i;
	struct student s[10];
	printf("Enter the student data:");
	for(i=0;i<10;i++)
	{
		s[i]=inputData();
	}
	for(i=0;i<10;i++)
	{
		displayData(s[i]);
	}
	
}