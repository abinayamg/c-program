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
	
}college,*coll;

int main()
{
		
	//stud=&student;
	struct college_detail college ={1,"sathiya",1102,"ece",99.5};
    coll=&college;
	printf("id :%d",coll->student.id);
	printf("name :%s",coll->student.name);
	printf("college code  :%d",coll->code);
	printf("dept :%s",coll->dept);
	printf("percentage:%f",coll->percentage);

	
	return 0;
	
}

