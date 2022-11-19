#include<stdio.h>
int add(int num1,int num2);
int main(){
	add(40,50);
}
int add(int num1 , int num2){
	int num3=num1+num2;
	printf("result=%d",num3);
}

