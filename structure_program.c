#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	int standard;
	char section[2];
	float marks;
};
int main(){
	struct student s1;
	printf("enter the student details:\n");
	printf("enter rollno:");
	scanf("%d",&s1.rollno);
	printf("enter name:");
	scanf("%s",&s1.name);
	printf("enter standard:");
	scanf("%d",&s1.standard);
	printf("enter section:");
	scanf("%s",&s1.section);
	printf("enter marks:");
	scanf("%f",&s1.marks);
	
	printf("\n\n");
	
	
	printf("student roll no:%d\n",s1.rollno);
	printf("your name:%s\n",s1.name);
	printf("your standard:%d\n",s1.standard);
	printf("your section:%s\n",s1.section);
	printf("your marks:%f\n",s1.marks);
	
}
