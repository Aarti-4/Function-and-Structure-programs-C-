#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	
};
int main(){
	char ch;
	struct student *s;
	printf("welcome\n");
	printf("press Y:");
	scanf("%c",&ch);
	if(ch=='Y'){
		s=(struct student*)malloc(sizeof(struct student));
		printf("enter name:");
		scanf("%s",&s->name);
		printf("enter rollno:");
		scanf("%d",&s->rollno);
	}
	else{
		printf("thakyou.");
	}
	return 0;
}
