#include<stdio.h>
int main(){
	int n,*arr,n1,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	arr=(int *)calloc(n,sizeof (int));
	for(i=0;i<n;i++){
		printf("enter elemnts:");
		scanf("%d",(arr+i));
	}
	printf("enter the new size:");
	scanf("%d",&n1);
	
	arr=(int*)realloc(arr,n1*sizeof(int));
	printf("array elemnt are:");
	
	for(i=0;i<n1;i++){
		printf("%d\t",*(arr+i));
}
}
