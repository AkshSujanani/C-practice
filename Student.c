#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	int roll_no;
	char name[50];
	char department[50];
	char course[50];
	int join_year;
};
void data(struct student std[]){
	int i,roll_no;

	printf("Enter the student roll no:");
	scanf("%d",&roll_no);

	for(i=0;i<2;i++)
		if(roll_no == std[i].roll_no){
			printf("Roll no: %d\tName: %s\tDepartment:%s\tCourse:%s\tJoining Year:%d",std[i].roll_no,std[i].name,std[i].department,std[i].course,std[i].join_year);
			exit(1);
		}
}
void name(struct student std[]){
	int i,year;

	printf("Enter the Year: ");
	scanf("%d",&year);

	for(i=0;i<2;i++){
		if(year == std[i].join_year)
			printf("%s\t",std[i].name);
	}
}

void main(){
	struct student std[2];
	int i;

	for(i=0;i<2;i++)
			scanf("%d%s%s%s%d",&std[i].roll_no,std[i].name,std[i].department,std[i].course,&std[i].join_year);

	name(std);
	data(std);
}