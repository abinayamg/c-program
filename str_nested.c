#include<stdio.h>

struct  student_detail
{
	int id;
	char name[100];
};

struct college_detail
{
	struct student_detail student;
	int code;  
	char dept[100];                  
	float percentage;                

	
}college;

int main()
{
	struct college_detail college ={1,"sathiya",1102,"ece",99.5};
	printf("id :%d",college.student.id);
	printf("name :%s",college.student.name);
	printf("college code  :%d",college.code);
	printf("dept :%s",college.dept);
	printf("percentage:%f",college.percentage);
	printf("id :%d",college.student.id);
	printf("name :%s",college.student.name);
	
	return 0;
	
}

