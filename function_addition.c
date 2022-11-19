#include<stdio.h>

int add();//declaring add function -1

int main()
{
	printf("Welcome in main\n");
	add(); // calling add function - 3
	add();
	add();
	add();
	
}

int add() //defining add function - 2
{
	int num1,num2,num3;
	printf("Enter Number1: ");
	scanf("%d",&num1);
	printf("Enter Number2: ");
	scanf("%d",&num2);
	num3=num1+num2;
	printf("Result: %d\n",num3);
	
}
