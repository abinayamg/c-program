#include<stdio.h>
#include<string.h>

struct student 
{
	int mark;
	char name[100];
	float average;
}record;

//struct student record;

void student_demo();

int main()
{
	
	record.mark=100;
	strcpy(record.name,"sathiya");
	record.average=99.9;
	student_demo();
	return 0;
	
}
void student_demo()
{
	printf("mark :%d",record.mark);
	printf("name :%s",record.name);
	printf("average :%f",record.average);
	
}
