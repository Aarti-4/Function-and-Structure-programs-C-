//#include<stdio.h>
//int add(int num1 ,int num2);
//int main(){
//   int x=add(10,20);
//   int y=add(40,20);
//   int z=x-y;
//   printf("result =%d",z);
//}
//int add(int num1,int num2){
//	int num3=num1+num2;
//	printf("sum=%d\n",num3);
//	return num3;
//}


#include<stdio.h>
int add(int num1,int num2);
int main(){
	int x=add(40,50);
	int z=x-30;
	printf("Result =%d",z);

}
int add(int num1,int num2){
	int num3=num1+num2;
	 printf("add=%d\n\n",num3);
	 return num3;
}
