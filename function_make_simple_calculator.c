#include<stdio.h>
float add(int x,int y){
	float z;
	z=x+y;
	return z;
}
float sub(int x,int y){
	float z;
	z=x-y;
	return z;
}
float mul(int x,int y){
	float z;
	z=x*y;
	return z;
}
float div(int x,int y){
	float z;
	z=x/y;
	return z;
}
float rem(int x,int y){
	float z;
	z=x%y;
	return z;
}

int main(){
	int a,b,c;
	float result;
	printf("calculator");
	printf("\n1.add");
	printf("\n2.sub");
	printf("\n3.mul");
	printf("\n4.div");
	printf("\n5.exit");
	while(1){
	printf("\nenter ur choice from 1 to 5:");
	scanf("%d",&c);
	switch(c){
		case 1:
		printf("enter the a and b values:");
	    scanf("%d %d ",&a,&b);
		result=add(a,b);
		printf("result:%f",result);
		break;
		case 2:
		printf("enter the a and b values:");
	    scanf("%d %d ",&a,&b);
		result=sub(a,b);
		printf("result:%f",result);
		break;
		case 3:
		printf("enter the a and b values:");
	    scanf("%d %d ",&a,&b);
		result=mul(a,b);
		printf("result:%f",result);
		break;
		case 4:
		printf("enter the a and b values:");
	    scanf("%d %d ",&a,&b);
		result=div(a,b);
		printf("result:%f",result);
		break;
		case 5:
		printf("enter the a and b values:");
	    scanf("%d %d ",&a,&b);
		result=rem(a,b);
		printf("result:%f",result);
	}
	
	
}// end of while loop.
}
