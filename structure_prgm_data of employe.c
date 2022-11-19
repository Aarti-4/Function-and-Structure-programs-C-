#include<stdio.h>
struct employee{
	char name[200];
	char position[200];
	int contact_no;
	int employe_id;
	int salary;
};
int main(){
	struct employee e[10];
	int i;
	for(i=0;i<=0;i++){
		printf("enter the details of employee %d:\n",i+1);
		printf("enter employee name:");
		scanf("%s",&e[i].name);
		printf("enter position of employe:");
		scanf("%s",&e[i].position);
		printf("enter contact no of employe:");
		scanf("%d",&e[i].contact_no);
		printf("enter employee id of employe:");
		scanf("%d",&e[i].employe_id);
		printf("enter monthly income of employe:");
		scanf("%d",&e[i].salary);
		
		printf("\n\n");
	}
	for(i=0;i<=0 ;i++){
		printf("employee name:%s\n",e[i].name);
		printf("employee position:%s\n",e[i].position);
		printf("employee contact no:%d\n",e[i].contact_no);
		printf("employee id:%d\n",e[i].employe_id);
		printf("employee salary:%d\n",e[i].salary);
		printf("\n\n");
	}
}
