#include<stdio.h>
struct book{
	char name[50];
	float price;
	int pageno;
	char author_name[50];
};
int main(){
	struct book b[10];
	int i;
	for(i=0;i<10;i++){
		printf("enter the details of %d book\n",i+1);
		printf("enter book name:\n");
		scanf("%s",&b[i].name);
		printf("enter price:\n");
		scanf("%f",&b[i].price);
		printf("enter pageno:\n");
		scanf("%d",&b[i].pageno);
		printf("enter author name:\n");
		scanf("%s",&b[i].author_name);
		printf("\n\n");
	}
	for(i=0;i<10;i++){
		printf("book name:%s\n",b[i].name);
		printf("book price:%f\n",b[i].price);
		printf("pageno:%d\n",b[i].pageno);
		printf("author name:\n",b[i].author_name);
	}
	
}
