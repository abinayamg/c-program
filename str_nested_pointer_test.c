#include<stdio.h>

struct  student_detail
{
	int id;
	char name[100];
};

struct college_detail
{
	struct student_detail student,*stu;
	int code;  
	char dept[100];                  
	float percentage;                
	
}college;

int main()
{
		
	//stud=&student;
	struct college_detail college ={1,"sathiya",1102,"ece",99.5};
    //coll=&college;
    stu=&student;
	printf("id :%d",college.stu->id);
	printf("name :%s",college.stu->name);
	printf("college code  :%d",college.code);
	printf("dept :%s",college.dept);
	printf("percentage:%f",college.percentage);

	
	return 0;
	
}

