#include<stdio.h>
int add();
int evodd();
int main(){
	evodd();
	
}
int add(){
	int num1,num2,num3;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	num3=num1+num2;
	printf("Add: %d\n",num3);
	return num3;
}
int evodd()
{
	int x=add();
	if(x%2==0)
	{
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
