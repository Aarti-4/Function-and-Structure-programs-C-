#include<stdio.h>
int evodd();
int main(){
	evodd();
	evodd();
	evodd();
}
int evodd(){
	int num;
	printf("\n\nenter number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("it is even");
	}
	else{
		printf("it is odd");
	}
}
