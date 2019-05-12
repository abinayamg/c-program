#include<stdio.h>
#include<string.h>
#include "structure.h"


int main()
{
	//struct student report;
	
	report.mark=100;
	strcpy(report.name,"sathiya");
	report.average=99.9;
	
	printf("mark :%d",report.mark);
	printf("name :%s",report.name);
	printf("average :%f", report.average);
	
	return 0;
}
