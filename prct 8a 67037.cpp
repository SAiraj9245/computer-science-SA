#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[20];
	float percentage;
};
int main()
{
	struct student s1;
	printf("Enter rollno,name & percentage;");
	scanf("%d%s%f",&s1.rollno,s1.name,&s1.percentage);
	printf("\n rollno=%d",s1.rollno);
	printf("\n name=%s",s1.name);
	printf("\n percentage=%f",s1.percentage);
	

getch();
}
