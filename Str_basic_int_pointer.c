#include<stdio.h>

struct student 
{
	int mark;
	char name[100];
	float average;
};

int main()
{
	struct student report ={0};
	
	report.mark=100;
	strcpy(report.name,"sathiya");
	report.average=99.9;
	
	printf("mark :%d",report.mark);
	printf("name :%s",report.name);
	printf("average :%f", report.average);
	
	return 0;
}
