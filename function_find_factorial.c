#include<stdio.h>
int addnumbers();
int main(){
	addnumbers();
	
}
int addnumbers(){
int num,fact=1,i;
    printf("enter the last value:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("%d\n",i);
	}
	printf("factorial: %d",fact);



}
