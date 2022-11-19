#include<stdio.h>
int div();
int main(){
	div();
	div();
	
}
int div(){
	int a,b,c;
	printf("enter the a value:");
	scanf("%d",&a);
	printf("enter the b value:");
	scanf("%d",&b);
	c=a/b;
	printf("result:%d\n\n",c);
}
