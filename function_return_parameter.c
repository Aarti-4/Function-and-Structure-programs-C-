#include<stdio.h>
int add();
int main(){
	int x=add();
	int y=add();
	int z=x-y;
	printf("result:%d",z);
	}
int add(){
 int a,b,c;
 printf("enter a value:");
 scanf("%d",&a);
 printf("enter b value:");
 scanf("%d",&b);
  c=a+b;
 return c;
}
 
