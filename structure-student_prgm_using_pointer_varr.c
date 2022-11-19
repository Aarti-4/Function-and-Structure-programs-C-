#include<stdio.h>
struct student{
	char name[50];
	int rollno;
	char deptt[50];
	int year;
};
int main(){
	struct student s1,*p;
      p=&s1;
	printf("enter the student name:");
	scanf("%s",&p->name);
	printf("enter rollno:");
	scanf("%d",&p->rollno);
	printf("enter the department:");
	scanf("%s",&p->deptt);
	printf("enter the year:");
	scanf("%d",&p->year);
	
    printf("\n\n");  
    printf("your student details here\n");
	printf("your name:%s\n",p->name);
	printf("your rollno:%d\n",p->rollno);
	printf("your department:%s\n",p->deptt);
	printf("student year:%d\n",p->year);
    
}
